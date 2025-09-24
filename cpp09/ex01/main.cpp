/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:03:53 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/10 13:23:21 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
		RPN	instance(argv[1]);
	else
		std::cout << "Error: wrong amount of arguments" << std::endl;
	
	return 0;
}
