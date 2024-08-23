/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:57:48 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 15:15:48 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
public:
    /* Constructors */
    Dog();
    Dog(const Dog &other);
    
    /* Destructors */
    ~Dog();

    /* Oprators */
    Dog &operator=(const Dog &other);

    /* Member Functions */
    void makeSound() const;
    void put_idea(std::string newIdea);
    void print_ideas() const;

private:
    Brain *_brain;
};

#endif // Dog_HPP