/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:02:41 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 18:00:52 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Undefined")
{
	//std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PresidentialPardonForm default destructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const str target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	//std::cout << "PresidentialPardonForm base constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm("PresidentialPardonForm", 25, 5), _target(cpy._target)
{
	//std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	*this = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	//std::cout << "PresidentialPardonForm copy operator called." << std::endl;
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw (Bureaucrat::FormNotSigned());
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
