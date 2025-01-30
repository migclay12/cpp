/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:48:31 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/04 15:47:47 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
//Check includes and classes on both
#include <string>
#include <iostream>
#include "Form.hpp"

typedef std::string str;

class Form;

class Bureaucrat
{
	private:
		const str _name;
		int		  _grade;
	public:
		Bureaucrat(str name, int grade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &cpy);
		const str	getName() const;
		int			getGrade() const;
		void		gradeIncrement();
		void		gradeDecrement();
		void		signForm(Form & form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("The Bureaucrats grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("The Bureaucrats grade is too low");
				}
		};
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f);
