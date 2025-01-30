/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:02 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:02 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(5, "Steve");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
}
