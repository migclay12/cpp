/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:49 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:49 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	getLevel(std::string input)
{
	if (input == "debug")
		return (0);
	if (input == "info")
		return(1);
	if (input == "warning")
		return (2);
	if (input == "error")
		return (3);
	return (-1);
}

void	Harl::complain(str input)
{
	void (Harl::*pointerFunction)() = NULL;
	switch (getLevel(input))
	{
		case 0:
			pointerFunction = &Harl::debug;
			(this->*pointerFunction)();
			break;
		case 1:
			pointerFunction = &Harl::info;
			(this->*pointerFunction)();
			break;
		case 2:
			pointerFunction = &Harl::warning;
			(this->*pointerFunction)();
			break;
		case 3:
			pointerFunction = &Harl::error;
			(this->*pointerFunction)();
			break;
		default:
			break;
	}
}
