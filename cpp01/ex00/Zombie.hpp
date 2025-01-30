/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:07:58 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:07:58 by miggonza         ###   ########.fr       */
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
	Zombie(str name);
	~Zombie();
	void	announce(void);
};

void randomChump(str name);
Zombie *newZombie(str name);

#endif