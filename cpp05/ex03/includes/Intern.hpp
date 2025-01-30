/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:29:23 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 13:57:44 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

typedef std::string str;

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &cpy);
		Intern &operator=(const Intern &cpy);

		AForm *makeForm(str form, str target);

		class WrongFormException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("The form you requested doesn't exist");
				}
		};
};


