/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:43:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 12:50:26 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICharacter_HPP
# define ICharacter_HPP

# include "AMateria.hpp"

class Character;

class AMateria;

class ICharacter {
public:
    /* Destructors */
    virtual ~ICharacter() {}
    
    /* Member Functions */
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

#endif // ICharacter_HPP