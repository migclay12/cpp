/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:32:15 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 13:32:15 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Peter("\x1b[31mSamu\x1b[0m");
	Peter.beRepaired(10);
	Peter.attack("Batman");
	Peter.takeDamage(5);
	std::cout << std::endl;

	ScavTrap Steve("\x1b[32mClara\x1b[0m");
	Steve.attack("Hulk");
	Steve.takeDamage(100);
	Steve.beRepaired(50);
	Steve.attack("Hulk");
	std::cout << std::endl;
}
