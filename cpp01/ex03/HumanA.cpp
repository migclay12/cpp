/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:21 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:21 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(str name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
