/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:58:43 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 16:20:11 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "AForm.hpp"

typedef std::string str;

class ShrubberyCreationForm : public AForm
{
	private:
		const str _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const str target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
		~ShrubberyCreationForm();

		virtual void execute(Bureaucrat const &executor) const;
};
