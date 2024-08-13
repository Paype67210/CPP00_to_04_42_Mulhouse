/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:29:40 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 09:30:10 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    return;
}

HumanA::~HumanA() {
    return;
}

void HumanA::attack() {
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
    return;
}
