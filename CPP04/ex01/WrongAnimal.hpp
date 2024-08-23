/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:00:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 11:49:21 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

# include <iostream>
# include <string>

// Définition des couleurs
# include "colors.hpp"

class WrongAnimal {
public:
    /* Constructors */
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal(std::string type);
    
    /* Destructors */
    ~WrongAnimal();
    
    /* Oprators */
    WrongAnimal& operator=(const WrongAnimal &other);

    /* Getters */
    std::string getType() const;

    /* Setters */
    void setType(std::string type);
    
    /* Member Functions */
    void makeSound() const;

protected:
    // Membres privés
    std::string _type;
};

#endif // WrongAnimal_HPP