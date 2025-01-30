/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:05 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:05 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::set_name(str name)
{
	this->name = name;
}

Zombie::Zombie() {
	std::cout << "Zombie horde created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->name << " is really dead." << std::endl;
}

void	Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
