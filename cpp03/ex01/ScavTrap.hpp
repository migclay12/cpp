/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:32:12 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 15:02:21 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

typedef std::string str;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(str name);
		ScavTrap(const ScavTrap &cpyConstr);
		ScavTrap &operator=(const ScavTrap &cpyOpp);
		~ScavTrap();

		void attack(const str &target);
		void guardGate();
};

#endif
