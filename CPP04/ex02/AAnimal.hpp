/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:00:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 13:31:56 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

# include <iostream>
# include <string>

// Définition des couleurs
# include "colors.hpp"

class AAnimal {
public:
    /* Constructors */
    AAnimal();
    AAnimal(const AAnimal &other);
    AAnimal(std::string type);
    
    /* Destructors */
    virtual ~AAnimal();
    
    /* Oprators */
    AAnimal& operator=(const AAnimal &other);

    /* Getters */
    std::string getType() const;

    /* Setters */
    void setType(std::string type);
    
    /* Member Functions */
    virtual void makeSound() const = 0;

protected:
    // Membres privés
    std::string _type;
};

#endif // AAnimal_HPP