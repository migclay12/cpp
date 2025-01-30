/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:32:12 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 17:37:25 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
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
