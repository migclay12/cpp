/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:09:37 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/18 16:21:58 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(str name);
		FragTrap(const FragTrap &cpyConstr);
		FragTrap &operator=(const FragTrap &cpyOpp);
		~FragTrap();

		void attack(const str &target);
		void highFiveGuys(void);
};

#endif
