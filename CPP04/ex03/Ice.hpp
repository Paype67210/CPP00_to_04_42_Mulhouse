/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:51:18 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/20 15:16:17 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
public:
    /* Constructors */
    Ice();
    Ice(const Ice &other);
    
    /* Destructors */
    virtual ~Ice();
    
    /* Oprators */
    Ice &operator=(const Ice &other);

    /* Member Functions */
    virtual AMateria* clone() const;
    virtual void use(ICharacter &target);
};

#endif // Ice_HPP
