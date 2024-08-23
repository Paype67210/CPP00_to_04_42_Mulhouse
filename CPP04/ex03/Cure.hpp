/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:51:18 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 17:30:46 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
public:
    /* Constructors */
    Cure();
    Cure(const Cure &other);
    
    /* Destructors */
    virtual ~Cure();
    
    /* Oprators */
    Cure &operator=(const Cure &other);

    /* Member Functions */
    virtual AMateria* clone() const;
    virtual void use(ICharacter &target);
};

#endif // Cure_HPP
