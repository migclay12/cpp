/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:37:08 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 18:30:35 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap constructor has been called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " has destroyed everything" << std::endl;
}

DiamondTrap::DiamondTrap(str name)
{
	this->name = name;
	ClapTrap::name = name + "\x1b[36m_clap_name\x1b[0m";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << this->name << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpyConstr)
{
	this->name = cpyConstr.name;
	this->hitPoints = cpyConstr.hitPoints;
	this->energyPoints = cpyConstr.energyPoints;
	this->attackDamage = cpyConstr.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpyOpp)
{
	if (this != &cpyOpp)
	{
		this->name = cpyOpp.name;
		this->hitPoints = cpyOpp.hitPoints;
		this->energyPoints = cpyOpp.energyPoints;
		this->attackDamage = cpyOpp.attackDamage;
	}
	return (*this);
}

void DiamondTrap::attack(const str &target)
{
	//Put this->??
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap, your name is: " << this->name << std::endl;
	std::cout << "ClapTrap, your name is: " << ClapTrap::name << std::endl;
}
