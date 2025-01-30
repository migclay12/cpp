/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:18:22 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 14:18:22 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has destroyed everything" << std::endl;
}

ClapTrap::ClapTrap(str name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpyConstr)
{
	this->name = cpyConstr.name;
	this->hitPoints = cpyConstr.hitPoints;
	this->energyPoints = cpyConstr.energyPoints;
	this->attackDamage = cpyConstr.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpyOpp)
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

void ClapTrap::attack(const str &target)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
			std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
		else
			std::cout << "ClapTrap " << this->name << " dosen't have enough energy points: " << this->energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " dosen't have hit points: " << this->hitPoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount > 0)
	{
		if (this->hitPoints > 0)
		{
			this->hitPoints -= amount;
			std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage" << std::endl;
			if (this->hitPoints < 0)
				this->hitPoints = 0;
			std::cout << "Hit points after attack: " << this->hitPoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->name << " has allready suffered enough, let him be" << std::endl;
	}
	else
		std::cout << "The ammount introduced has not been accepted, no damage has been done" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount > 0)
	{
		if (this->hitPoints > 0)
		{
			if (this->energyPoints > 0)
			{
				this->hitPoints += amount;
				std::cout << "ClapTrap " << this->name << " has repaired itself for " << amount << " hit points" << std::endl;
				std::cout << "Now it has " << this->hitPoints << " hit points" << std::endl;
				this->energyPoints--;
			}
			else
				std::cout << "ClapTrap " << this->name << " dosen't have enough energy points: " << this->energyPoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->name << " dosen't have hit points: " << this->hitPoints << std::endl;
	}
	else
		std::cout << "The ammount introduced has not been accepted, no healing has been done" << std::endl;
}
