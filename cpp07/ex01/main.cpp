/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:18:50 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/11 14:32:13 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void iter(T *adress, int len, void(*d)(T &var))
{
	for (int i = 0; i < len; i++)
		d(adress[i]);
}

template<typename T>
void	printValue(T &val) {
	std::cout << val << ", ";
}

template<typename T>
void	addValue(T &val) {
	val++;
}

int	main() {
	
	std::cout << "Print chars" << std::endl;
	char array[] = {'a', 'b', 'c', 'd'};
	iter(array, 4, printValue<char>);

	std::cout << std::endl;
	std::cout << "Print ints" << std::endl;
	int	array2[] = {1, 2, 3, 4};
	iter(array2, 4, addValue<int>);
	iter(array2, 4, printValue<int>);
}
