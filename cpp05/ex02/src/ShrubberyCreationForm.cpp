/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:59:10 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 18:17:42 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Undefined")
{
	//std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm default destructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const str target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	//std::cout << "ShrubberyCreationForm base constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm("ShrubberyCreationForm", 145, 137), _target(cpy._target)
{
	//std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	//std::cout << "ShrubberyCreationForm copy operator called." << std::endl;
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw (Bureaucrat::FormNotSigned());

	str outfile = _target + "_shrubbery";
	std::ofstream output(outfile.c_str());

	if (!output.is_open())
	{
		std::cerr << "Error: Could not create file " << _target + "_shrubbery" << std::endl;
		return;
	}

	output << "       ccee88oo" << std::endl;
	output << "  C8O8O8Q8PoOb o8oo" << std::endl;
	output << " dOB69QO8PdUOpugoO9bD" << std::endl;
	output << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	output << "    6OuU  /p u gcoUodpP" << std::endl;
	output << "      \\\\//  /douUP" << std::endl;
	output << "       |||||||//" << std::endl;
	output << "       |||||||/" << std::endl;
	output << "       |||||||" << std::endl;
	output << "  .....//||||\\...." << std::endl;

	output.close();
	std::cout << executor.getName() << " created a shrubbery in " << _target + "_shrubbery file" << std::endl;
}
