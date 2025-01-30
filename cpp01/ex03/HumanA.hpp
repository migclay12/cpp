/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:24 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:24 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

typedef std::string str;

class HumanA
{
	private:
		str		name;
		Weapon	&weapon;
	public:
		HumanA(str name, Weapon &weapon);
		~HumanA();
		
		void	attack() const;
};

#endif
