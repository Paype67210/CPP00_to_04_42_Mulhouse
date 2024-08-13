/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:31:09 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 09:52:03 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
    return;
}

HumanB::~HumanB() {
    return;
}

void HumanB::attack() {
    if (_weapon)
        std::cout << _name << " attacks with her " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attacks with her bare hands" << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
    return;
}
