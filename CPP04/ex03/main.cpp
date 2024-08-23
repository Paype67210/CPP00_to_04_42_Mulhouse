/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:25:59 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 15:26:19 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int	main(void) {
	std::cout << BLUE500 << "----- Creation of MateriaSource Stock: -----" << RESET << std::endl << std::endl;

	MateriaSource *stock = new MateriaSource();
	
	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) { stock->learnMateria(new Ice()); }
		else { stock->learnMateria(new Cure()); }
	}
	for (int i = 0; i < 4; i++) {
		std::cout << TEAL500 << "Stock[" << i << "]: " << stock->getStock(i) \
			<< "\t" << stock->getStock(i)->getType() << RESET << std::endl;
	}	

	std::cout << std::endl << BLUE500 << "----- Creation & assignation of materias: -----" << RESET << std::endl << std::endl;

	Character *Arthur = new Character("Arthur");
	
	AMateria *tmp;
	tmp = stock->createMateria("ice");
	Arthur->equip(tmp);
	tmp = stock->createMateria("cure");
	Arthur->equip(tmp);
	tmp = stock->createMateria("boom");
	Arthur->equip(tmp);
	tmp = stock->createMateria("ice");
	Arthur->equip(tmp);
	tmp = stock->createMateria("cure");
	Arthur->equip(tmp);
	tmp = stock->createMateria("ice");
	Arthur->equip(tmp);

	std::cout << std::endl << BLUE500 << "----- Creation & use of materias: -----" << RESET << std::endl << std::endl;
	
	ICharacter *Myra = new Character("Myra");
	
	Arthur->use(0, *Myra);
	Arthur->use(1, *Myra);
	
	delete Myra;
	delete Arthur;
	delete stock;

	std::cout << BLUE500 << std::endl << "----- Overfilling Character with Materias: -----" \
		<< RESET << std::endl << std::endl;

	IMateriaSource *new_stock = new MateriaSource();
	new_stock->learnMateria(new Ice());
	ICharacter *William = new Character("Arthur");
	for (int i = 0; i < 26; i++) {
		std::cout << SKY300 << "--> Iteration n: " << i + 1 << RESET << std::endl;
		William->equip(new_stock->createMateria("ice"));
	}
	delete William;
	delete new_stock;

	std::cout << BLUE500 << std::endl << "----- Copy costructor and assignment operator -----"
        << RESET << std::endl << std::endl;
	
	IMateriaSource* Over_stock = new MateriaSource();
	AMateria *cure = new Cure();
	Over_stock->learnMateria(cure);
	AMateria *temp_materia = Over_stock->createMateria("cure");
	Character *Alex = new Character("Alex");
	Alex->equip(temp_materia);
	Character *Damien = new Character(*Alex);
	Damien->use(0, *Alex);
	Damien->use(0, *Alex);
	Character *Laura = new Character("Laura");
	*Laura = *Alex;
	Laura->use(0, *Alex);
	delete Over_stock;
	delete Alex;
	delete Damien;
	delete Laura;
}
