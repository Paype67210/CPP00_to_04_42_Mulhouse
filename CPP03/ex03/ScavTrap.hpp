/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:11:43 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:48:50 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    /* Constructors */
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    
    /* Destructor */
    ~ScavTrap();

    /* Operators */
    ScavTrap &operator=(const ScavTrap &other);
    
    /* Member functions */
    void attack(const std::string &target);
    void attack(ClapTrap &target);
    void beRepaired(unsigned int amount);
    void guardGate();
};

#endif // ScavTrap_HPP