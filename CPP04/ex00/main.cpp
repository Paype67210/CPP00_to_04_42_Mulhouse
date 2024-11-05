/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:21:52 by pdeson            #+#    #+#             */
/*   Updated: 2024/11/05 14:31:33 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    std::cout << YELLOW400 << "--- Creation of the Animal Class ---" << std::endl << std::endl;
    const Animal *Strange = new Animal();
    const Animal *Garfield = new Cat();
    const Animal *Phoebus = new Dog();
    const WrongAnimal *WrongStrange = new WrongAnimal();
    const WrongCat *WrongGarfield = new WrongCat();    
    
    std::cout << Strange->getType() << ": ";
    Strange->makeSound(); // will output the standart sound!
    std::cout << std::endl;
    std::cout << Garfield->getType() << ": ";
    Garfield->makeSound(); // will output the cat sound!
    std::cout << std::endl;
    std::cout << Phoebus->getType() << ": ";
    Phoebus->makeSound(); // will output the dog sound!
    std::cout << std::endl;
    std::cout << WrongStrange->getType() << ": ";
    WrongStrange->makeSound(); // will output the standart wrong sound!
    std::cout << std::endl;
    std::cout << WrongGarfield->getType() << ": ";
    WrongGarfield->makeSound(); // will output the wrongcat sound!
    std::cout << std::endl;
    
    delete Strange;
    delete Garfield;
    delete Phoebus;
    delete WrongStrange;
    delete WrongGarfield;
    std::cout << RESET << std::endl;
    return 0;
}
