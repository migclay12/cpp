/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:58:00 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/03 14:58:00 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _name("Undefined"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	//std::cout << "Form default constructor called." << std::endl;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::~Form()
{
	//std::cout << "Form default destructor called." << std::endl;
}

Form::Form(str name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	//std::cout << "Form base constructor called." << std::endl;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (Form::GradeTooLowException());
}

Form:: Form(const Form &cpy) : _name(cpy._name), _gradeToSign(cpy._gradeToSign), _gradeToExecute(cpy._gradeToExecute)
{
	//std::cout << "Form copy constructor called." << std::endl;
	*this = cpy;
}

Form& Form:: operator=(const Form& f)
{
	//std::cout << "Form copy operator called." << std::endl;
	if (f._gradeToSign < 1 || f._gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	if (f._gradeToSign > 150 || f._gradeToExecute > 150)
		throw (Form::GradeTooLowException());
	if (this != &f)
		*this = f;
	return (*this);
}

str const Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeSigned() const
{
	return (_gradeToSign);
}

int Form::getGradeExecuted() const
{
	return (_gradeToExecute);
}

void Form::beSigned(Bureaucrat bur)
{
	if (_signed == true)
	{
		std::cout << this->_name << " has already been signed." << std::endl; 
		return ;
	}
	if (bur.getGrade() > _gradeToSign)
		throw (Form::GradeTooHighException());
	_signed = true;
}

std::ostream& operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << ", signed status: " << form.getSigned() << std::endl;
	out << "With a grade to signe of: " << form.getGradeSigned() << ", and a grade to execute of: " << form.getGradeExecuted() << std::endl;
	return (out);
}