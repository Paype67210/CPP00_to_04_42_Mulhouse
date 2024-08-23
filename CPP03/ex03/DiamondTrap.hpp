/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:06:14 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:48:27 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
    /* Constructors */
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &other);
    
    /* Destructor */
    ~DiamondTrap();

    /* Operators */
    DiamondTrap &operator=(const DiamondTrap &other);

    /* Membe<r functions */
    using ScavTrap::attack;
    void whoAmI(void);
    
private:
    std::string _name;
};

#endif // DiamondTrap_HPP