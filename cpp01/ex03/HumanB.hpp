/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:31 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:31 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

typedef std::string str;

class HumanB
{
	private:
		str name;
		Weapon *weapon;
	public:
		HumanB(str name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon &weapon);
};

#endif
