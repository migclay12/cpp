/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:30:44 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 11:53:27 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

Intern::Intern()
{
	//std::cout << "Intern default constructor called." << std::endl;
}

Intern::~Intern()
{
	//std::cout << "Intern default destructor called." << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	//std::cout << "Intern copy constructor called." << std::endl;
	*this = cpy;
}

Intern &Intern::operator=(const Intern &cpy)
{
	//std::cout << "Intern copy opperator called." << std::endl;
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

AForm *Intern::makeForm(str name, str target)
{
	str forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int num = 3;

	for (int i = 0; i <= 3; i++)
	{
		if (forms[i] == name)
			num = i;
	}
	
	switch (num)
	{
		case 0:
			return (new PresidentialPardonForm(target));
			break;
		case 1:
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			return (new ShrubberyCreationForm(target));
			break;
		default:
			throw(WrongFormException());
			break;
	}
	
}
