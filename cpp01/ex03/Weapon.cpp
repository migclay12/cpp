/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:37 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:37 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(str type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

const str	&Weapon::getType() const {
	return this->type;
}


void	Weapon::setType(str type) {
	this->type = type;
}
