/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:04:55 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 18:17:33 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 73, 45), _target("Undefined")
{
	//std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RobotomyRequestForm default destructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const str target) : AForm("RobotomyRequestForm", 73, 45), _target(target)
{
	//std::cout << "RobotomyRequestForm base constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm("RobotomyRequestForm", 73, 45), _target(cpy._target)
{
	//std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	//std::cout << "RobotomyRequestForm copy operator called." << std::endl;
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw (Bureaucrat::FormNotSigned());

	static bool isSeeded = false;
	if (!isSeeded) {
		srand(static_cast<unsigned int>(time(0)));
		isSeeded = true;
	}

	std::cout << "Some drilling noises drrrrrrrrrrrrrrr" << std::endl;
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully by " << executor.getName() << std::endl;
	else
		std::cout << _target << " the robotomy failed " << std::endl;
}
