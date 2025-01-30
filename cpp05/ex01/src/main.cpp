/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:58:05 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/03 14:58:05 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main(void)
{
	std::cout << "\tWRIGHT FORMS" << std::endl;
	try
	{
		Bureaucrat bur1("Miguel", 1);
		
		std::cout << bur1 << std::endl;
		
		Form form1("Only Miguel can sign", 1, 1);
		Form form2("Everyone can sign", 150, 150);
		
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
	
		bur1.signForm(form1);
		bur1.signForm(form2);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\tWRIGHT FORMS 2" << std::endl;
	try
	{
		Bureaucrat bur1("Samu", 150);
		
		std::cout << bur1 << std::endl;
		
		Form form1("Samu can't sign", 1, 1);
		Form form2("Everyone can sign", 150, 150);
		
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
	
		bur1.signForm(form1);
		bur1.signForm(form2);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		bur1.signForm(form2);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\tWRONG FORMS" << std::endl;
	try
	{
		Form form1("Grade to sign to high", 0, 150);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form2("Grade to sign to low", 200, 150);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form3("Grade to exec to high", 1, 0);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form4("Grade to exec to low", 1, 200);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
