/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:17:11 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 12:17:11 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	Intern intern;

	std::cout << std::endl << "Creating Forms" << std::endl;
	AForm	*presi = NULL;
	AForm	*robotomy = NULL;
	AForm	*shrubbery = NULL;

	try
	{
		presi = intern.makeForm("presidential pardon", "Macron");
		robotomy = intern.makeForm("robotomy request", "Robocop");
		shrubbery = intern.makeForm("shrubbery creation", "Amazonia");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	Bureaucrat	boss("Miguel", 1);

	if (presi)
	{
		boss.signForm(*presi);
		boss.executeForm(*presi);
	}
	std::cout << std::endl;
	if (robotomy)
	{
		boss.signForm(*robotomy);
		boss.executeForm(*robotomy);
	}
	std::cout << std::endl;
	if (shrubbery)
	{
		boss.signForm(*shrubbery);
		boss.executeForm(*shrubbery);
	}
	std::cout << std::endl;
	
	delete presi;
	delete robotomy;
	delete shrubbery;
}
