/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:02:26 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 12:08:54 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

typedef std::string str;

class PresidentialPardonForm : public AForm
{
	private:
		const str _target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const str target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);

		virtual void execute(Bureaucrat const &executor) const;
};
