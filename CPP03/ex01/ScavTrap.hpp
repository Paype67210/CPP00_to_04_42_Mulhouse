/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:11:43 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/18 18:42:04 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    /* Constructors */
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ClapTrap &other);
    
    /* Destructor */
    ~ScavTrap();

    /* Member functions */
    void attack(const std::string &target);
    void attack(ClapTrap &target);
    void beRepaired(unsigned int amount);
    void guardGate();
};

#endif // ScavTrap_HPP