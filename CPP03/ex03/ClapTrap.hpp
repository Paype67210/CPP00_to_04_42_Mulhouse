/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:19:37 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:47:59 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

// Définition des couleurs
# define DEFAULT "\033[39m"
# define BLACK "\033[30m"
# define GREY "\033[90m"
# define RED "\033[31m"
# define CYAN "\033[36m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[94m"
# define MAGENTA "\033[35m"
# define ORANGE "\033[38;5;208m"

class ClapTrap {
public:
	/* Constructors */
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);

    /* Destructor */
    ~ClapTrap();

    /* Operators */
    ClapTrap &operator=(const ClapTrap &other);

    /* Getters */
	std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;

    /* Setters */
    void setName(std::string name);
    void setHitPoints(int hitPoints);
    void setEnergyPoints(int energyPoints);
    void setAttackDamage(int attackDamage);
    
    /* Member functions */
    void attack(const std::string &target);
    void attack(ClapTrap &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void status(void) const;

protected:
    /* Attributes */
    std::string		_name;
    unsigned int	_hitPoints;
    unsigned int	_energyPoints;
    unsigned int	_attackDamage;
};

#endif // ClapTrap_HPP