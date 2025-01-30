/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:57:41 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/03 14:57:41 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

typedef std::string str;

class Bureaucrat;

class Form
{
	private:
		const str 	_name;
		bool		_signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;
	public:
		Form(str name, int gradeToSign, int gradeToExecute);
		Form();
		~Form();
		Form(const Form &cpy);
		Form &operator=(const Form &cpy);
		const str	getName() const;
		bool		getSigned() const;
		int			getGradeSigned() const;
		int			getGradeExecuted() const;
		void		beSigned(Bureaucrat bur);

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("The Forms grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("The Forms grade is too low");
				}
		};
};

std::ostream& operator<<(std::ostream &out, Form const &form);
