/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:37:05 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 17:34:19 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		str name;
	public:
		DiamondTrap();
		DiamondTrap(str name);
		DiamondTrap(const DiamondTrap &cpyConstr);
		DiamondTrap &operator=(const DiamondTrap &cpyOpp);
		~DiamondTrap();

		void attack(const str &target);
		void whoAmI();
};

#endif
