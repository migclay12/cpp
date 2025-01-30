/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:46:18 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:46:18 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			std::cout << (char)std::toupper(argv[j][i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}