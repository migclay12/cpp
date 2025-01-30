/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:07:27 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:07:27 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	//Zombie allocated on the heap
	Zombie *zombie = NULL;
	zombie = newZombie("Roger");
	zombie->announce();

	//Zombie allocated on the stack
	randomChump("Martha");
	delete (zombie);
}