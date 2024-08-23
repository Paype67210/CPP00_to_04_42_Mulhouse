/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:21:52 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 15:41:01 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main(void) {
    std::cout << YELLOW300 << std::endl << "--- Creation & Destruction of 1 cat & 1 dog ---" << std::endl << std::endl;
    Dog *Rex = new Dog();
    Cat *Garfield = new Cat();

    delete Rex;
    delete Garfield;

    std::cout << std::endl << GREEN300 << "--- Array of 10 animals ---" << std::endl << std::endl;

    Animal *array_animals[10];
    for (int i = 0; i < 10; i++) {
        if (i % 2)
            array_animals[i] = new Dog();
        else
            array_animals[i] = new Cat();
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++) array_animals[i]->makeSound();

    std::cout << std::endl;

    for (int i = 0; i < 10; i++) delete array_animals[i];

    std::cout << std::endl <<BLUE600 << "--- Test for deep copy ---" << std::endl << std::endl;
    Cat *cat2 = new Cat();
    cat2->put_idea("I'm bored...");
    cat2->put_idea("I'm hungry...");
    cat2->put_idea("Hmm... fish!");
    cat2->put_idea("I wanna play...");
    cat2->put_idea("I'm happy!");
    cat2->print_ideas();

    std::cout << std::endl << FUCHSIA500 << "--- Making a deep copy ---" << std::endl << std::endl;

    Cat *cat3 = new Cat(*cat2);
    cat2->put_idea("Gotta sleep now...");
    std::cout << std::endl;
    std::cout << BLUE500 << "Cat 2" << std::endl;
    cat2->print_ideas();
    std::cout << std::endl;
    std::cout << GREEN500 << "Cat 3" << std::endl;
    cat3->print_ideas();
    std::cout << RESET << std::endl;

    std::cout << std::endl << CYAN600 << "--- Copy assignment operator ---" << RESET << std::endl << std::endl;

    std::cout << "New Cat" << std::endl << std::endl;
    Cat *cat4 = new Cat();
    std::cout << std::endl <<"Assigning cat 3 to cat 4" << std::endl << std::endl;
    *cat4 = *cat3;
	std::cout << std::endl ;
    std::cout << ROSE700 << "Cat 4" << std::endl;
    cat4->print_ideas();
    std::cout << std::endl;
    std::cout << GREEN500 << "Cat 3" << std::endl;
    cat3->put_idea("No sleeping now!!!");
    cat3->print_ideas();
    std::cout << std::endl;
    std::cout << ROSE700 << "Cat 4" << std::endl;
    cat4->print_ideas();
    std::cout << std::endl;

    std::cout << std::endl << RESET << "--- Destruction ---" << std::endl << std::endl;

    delete cat2;
    delete cat3;
    delete cat4;
    return 0;
}