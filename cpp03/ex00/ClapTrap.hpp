/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:18:17 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 14:18:17 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

typedef std::string str;

class ClapTrap
{
	private:
		str name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap();
		ClapTrap(str name);
		ClapTrap(const ClapTrap &cpyConstr);
		ClapTrap &operator=(const ClapTrap &cpyOpp);
		~ClapTrap();

		void attack(const str &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
