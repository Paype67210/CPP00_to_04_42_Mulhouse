/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:43:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 13:01:31 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
public:
    /* Destructors */
    virtual ~Character();
    
    /* Constructors */
    Character();
    Character(std::string name);
    Character(const Character &other);
    
    /* Operators */
    Character &operator=(const Character &other);
    
    /* Getters & Setters */
    std::string const &getName() const;
    void setName(std::string name);
    AMateria *getStock(int idx) const;
    void setStock(AMateria *m, int idx);
    
    /* Member Functions */
    virtual void equip(AMateria *materia);
    virtual void equip_from_floor(int idx);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);

    static AMateria *floor[20];

private:
    std::string _name;
    AMateria *_tod_bag[4];
    static int _nb_Players;
};

#endif // Character_HPP