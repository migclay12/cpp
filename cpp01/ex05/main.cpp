/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:55 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:55 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;
	str		input;

	std::cout << "Please choose an option: debug, info, warning, error" << std::endl;
	std::getline(std::cin, input);
	if (input == "debug" || input == "info" || input == "warning" || input == "error")
		harl.complain(input);
	return (0);
}
