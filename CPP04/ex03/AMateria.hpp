/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:51:18 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 15:16:47 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>
# include <string>
# include "Character.hpp"
# include "MateriaSource.hpp"

// Définition des couleurs
# include "colors.hpp"

class Character;
class ICharacter;
class MateriaSource;
class IMateriaSource;

class AMateria {
public:
    /* Constructors */
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    
    /* Destructors */
    virtual ~AMateria();
    
    /* Oprators */
    AMateria &operator=(const AMateria &other);

    /* Getters & Setters */
    std::string const &getType() const; // Returns the materia type
    Character *getMan() const;
    MateriaSource *getMateriaSource() const; // Returns the materiaSource
    void setMateriaSource(MateriaSource *new_materia_source);
    void setMan(Character *new_Man);
    
    /* Member Functions */
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;
    
protected:
    // Membres privés
    std::string     _type;
    Character       *_Man;
    MateriaSource   *_materia_source;
};

#endif // AMateria_HPP