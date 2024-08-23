/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:11:43 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:48:41 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    /* Constructors */
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &other);
    
    /* Destructor */
    ~FragTrap();

    /* Operators */
    FragTrap &operator=(const FragTrap &other);

    /* Member functions */
    void attack(const std::string &target);
    void attack(ClapTrap &target);
    void highFivesGuys(void);
};

#endif // FragTrap_HPP