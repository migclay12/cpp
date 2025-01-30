/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:58:26 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/03 14:58:26 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

typedef std::string str;

class AForm
{
	private:
		const str 	_name;
		bool		_signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;
	public:
		AForm(str name, int gradeToSign, int gradeToExecute);
		AForm();
		virtual ~AForm();
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &cpy);

		const str		getName() const;
		bool			getSigned() const;
		int				getGradeSigned() const;
		int				getGradeExecuted() const;
		void			beSigned(Bureaucrat bur);
		virtual void	execute(Bureaucrat const &executor) const = 0;

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

std::ostream& operator<<(std::ostream &out, AForm const &form);
