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

#include "DiamondTrap.hpp"

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

	FragTrap Clara("\x1b[35mAngel\x1b[0m");
	Clara.beRepaired(75);
	Clara.attack("Black Widow");
	Clara.takeDamage(55);
	Clara.highFiveGuys();
	Clara.takeDamage(200);
	Clara.highFiveGuys();
	std::cout << std::endl;

	DiamondTrap Bling("\x1b[36mBling\x1b[0m");
	Bling.takeDamage(75);
	Bling.beRepaired(25);
	Bling.attack("Carbon");		//ScavTrap
	Bling.takeDamage(50);
	Bling.highFiveGuys();		//FragTrap
	Bling.guardGate();			//ScavTrap
	Bling.whoAmI();				//DiamondTrap
	std::cout << std::endl;
}
