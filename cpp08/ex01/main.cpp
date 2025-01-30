/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:26:04 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/13 13:27:29 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "\x1b[32mSmall array\x1b[0m" << std::endl;
	Span small = Span(5);

	try
	{
		small.addNumber(6);
		small.addNumber(3);
		small.addNumber(17);
		small.addNumber(9);
		small.addNumber(11);

		std::cout << small.shortestSpan() << std::endl;
		std::cout << small.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\x1b[32mMedium array\x1b[0m" << std::endl;
	Span medium = Span(100);

	try
	{
		medium.addMultipleNumbers(100);

		std::cout << medium.shortestSpan() << std::endl;
		std::cout << medium.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\x1b[32mBig array\x1b[0m" << std::endl;
	Span big = Span(100000);

	try
	{
		big.addMultipleNumbers(100000);

		std::cout << big.shortestSpan() << std::endl;
		std::cout << big.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\x1b[31mError tests\x1b[0m" << std::endl;
	Span smallError = Span(5);

	try
	{
		smallError.addNumber(0);
		smallError.addNumber(1);
		smallError.addNumber(2);
		smallError.addNumber(3);
		smallError.addNumber(4);
		smallError.addNumber(5);

		std::cout << smallError.shortestSpan() << std::endl;
		std::cout << smallError.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Span bigError = Span(100);

	try
	{
		bigError.addMultipleNumbers(0);

		std::cout << bigError.shortestSpan() << std::endl;
		std::cout << bigError.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
