/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:00:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/11/05 14:31:16 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

# include <iostream>
# include <string>

// Définition des couleurs
# include "colors.hpp"

class Animal {
public:
    /* Constructors */
    Animal();
    Animal(const Animal &other);
    Animal(std::string type);
    
    /* Destructors */
    virtual ~Animal();
    
    /* Oprators */
    Animal& operator=(const Animal &other);

    /* Getters */
    std::string getType() const;

    /* Setters */
    void setType(std::string type);
    
    /* Member Functions */
    virtual void makeSound() const;

protected:
    // Membres privés
    std::string _type;
};

#endif // Animal_HPP