/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:25:58 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 09:26:31 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return;
}

Weapon::~Weapon() {
    return;
}

const std::string &Weapon::getType() const {
    return (_type);
}

void Weapon::setType(std::string newtype) {
    _type = newtype;
    return;
}
