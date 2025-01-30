/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:08 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:08 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

typedef std::string str;

class Zombie
{
private:
	str name;
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	set_name(str name);
};

Zombie *zombieHorde(int N, str name);

#endif
