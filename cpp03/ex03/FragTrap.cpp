/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:09:34 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 18:39:38 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has destroyed everything" << std::endl;
}

FragTrap::FragTrap(str name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpyConstr)
{
	this->name = cpyConstr.name;
	this->hitPoints = cpyConstr.hitPoints;
	this->energyPoints = cpyConstr.energyPoints;
	this->attackDamage = cpyConstr.attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &cpyOpp)
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

void FragTrap::attack(const str &target)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
			std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
		else
			std::cout << "FragTrap " << this->name << " dosen't have enough energy points: " << this->energyPoints << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " dosen't have hit points: " << this->hitPoints << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
			std::cout << "FragTrap " << this->name << " will you give me a high-five?" << std::endl;
		else
			std::cout << "FragTrap " << this->name << " i'm terrebly sorry but you don't have enough energy for a high-five: " << this->energyPoints << std::endl; 
	}
	else
		std::cout << "FragTrap " << this->name << " i'm terrebly sorry but you don't have enough health for a high-five: " << this->hitPoints << std::endl; 
}

