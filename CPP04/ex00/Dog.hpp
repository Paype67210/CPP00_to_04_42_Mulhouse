/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:57:48 by pdeson            #+#    #+#             */
/*   Updated: 2024/11/05 14:29:20 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog : virtual public Animal {
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
};

#endif // Dog_HPP