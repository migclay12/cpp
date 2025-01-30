/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:39 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:39 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

typedef std::string str;

class Weapon
{
	private:
		str type;
	public:
		Weapon(str type);
		~Weapon();

		const str&	getType() const;
		void		setType(str type);
};

#endif
