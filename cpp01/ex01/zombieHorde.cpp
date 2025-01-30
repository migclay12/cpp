/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:12 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:12 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, str name)
{
	int i = 0;
	Zombie *horde = new Zombie[N];

	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
