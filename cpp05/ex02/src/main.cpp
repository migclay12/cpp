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

int main(void)
{
	std::cout << "Creating Bureaucrats" << std::endl;
	Bureaucrat bur1("President", 1);
	Bureaucrat bur2("Robot", 45);
	Bureaucrat bur3("Forest", 137);

	std::cout << std::endl << "Creating Forms" << std::endl;
	PresidentialPardonForm	presi("please forgive me");
	RobotomyRequestForm		robotomy("bipbip");
	ShrubberyCreationForm	forest("Plant");
	std::cout << std::endl;

	//President will execute PresidentialPardonForm
	try
	{
		bur1.signForm(presi);
		bur1.executeForm(presi);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}

	//Robot will not execute RobotomyRequstForm
	try
	{
		bur2.executeForm(robotomy);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}

	//Forest will execute ShrubberyCreationForm
	try
	{
		bur3.signForm(forest);
		bur3.signForm(robotomy);
		bur3.executeForm(forest);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}

	//Robot will execute RobotomyRequstForm
	try
	{
		bur2.signForm(robotomy);
		bur2.executeForm(robotomy);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}
}
