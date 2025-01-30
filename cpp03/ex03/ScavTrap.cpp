/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:32:10 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 18:44:40 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has destroyed everything" << std::endl;
}

ScavTrap::ScavTrap(str name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpyConstr)
{
	this->name = cpyConstr.name;
	this->hitPoints = cpyConstr.hitPoints;
	this->energyPoints = cpyConstr.energyPoints;
	this->attackDamage = cpyConstr.attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpyOpp)
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

void ScavTrap::attack(const str &target)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
		else
			std::cout << "ScavTrap " << this->name << " dosen't have enough energy points: " << this->energyPoints << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " dosen't have hit points: " << this->hitPoints << std::endl;
}


void ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
			std::cout << "ScavTrap" << this->name << " is now in gate keeper mode" << std::endl;
		else
			std::cout << "ScavTrap " << this->name << " i'm terrebly sorry but you don't have enough energy to defend the gate: " << this->energyPoints << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " i'm terrebly sorry but you don't have enough health to defend the gate: " << this->hitPoints << std::endl;
}
