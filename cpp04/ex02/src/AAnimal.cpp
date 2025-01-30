/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:45:36 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 17:15:39 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << CYAN << "AAnimal" << RESET << " constructor has been called" << std::endl;
	type = "Unasigned";
}

AAnimal::AAnimal(str _type)
{
	std::cout << CYAN << "AAnimal" << RESET << " constructor setter has been called" << std::endl;
	type = _type;
}

AAnimal::~AAnimal()
{
	std::cout << CYAN << "AAnimal" << RESET << " has destroyed everything" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	std::cout << CYAN << "AAnimal" << RESET << " copy has been called" << std::endl;
	this->type = cpy.type;
}

AAnimal &AAnimal::operator=(const AAnimal &cpy)
{
	std::cout << CYAN << "AAnimal" << RESET << " copy opperator has been called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

const str &AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::makeSound() const
{
	std::cout << CYAN << "What does the fox say???" << RESET << std::endl;
}
