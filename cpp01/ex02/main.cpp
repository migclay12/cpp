/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:17 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:17 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string str;

int	main() {
	str	string = "HI THIS IS BRAIN";
	str	*stringPTR = &string;
	str	&stringREF = string;

	std::cout << "String's adress: " << &string << std::endl;
	std::cout << "String's ptr adress: " << stringPTR << std::endl;
	std::cout << "String's ref adress: " << &stringREF << std::endl;

	std::cout << "String's value: " << string << std::endl;
	std::cout << "String's ptr value: " << *stringPTR << std::endl;
	std::cout << "String's ref value: " << stringREF << std::endl;
}
