/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:12:03 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 18:12:03 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Peter("\x1b[31mSamu\x1b[0m");
	Peter.beRepaired(10);
	Peter.attack("Batman");
	Peter.takeDamage(5);
}
