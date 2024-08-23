/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:34:27 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 12:50:54 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMateriaSource_HPP
# define IMateriaSource_HPP

# include "AMateria.hpp"

class AMateria;

class IMateriaSource {
public:
    /* Destructors */
    virtual ~IMateriaSource() {}
    
    /* Member Functions */
    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif // IMateriaSource_HPP
