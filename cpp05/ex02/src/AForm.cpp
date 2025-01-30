/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:58:34 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/03 14:58:34 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm() : _name("Undefined"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	//std::cout << "AForm default constructor called." << std::endl;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (AForm::GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (AForm::GradeTooLowException());
}

AForm::~AForm()
{
	//std::cout << "AForm default destructor called." << std::endl;
}

AForm::AForm(str name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	//std::cout << "AForm base constructor called." << std::endl;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (AForm::GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (AForm::GradeTooLowException());
}

AForm:: AForm(const AForm &cpy) : _name(cpy._name), _gradeToSign(cpy._gradeToSign), _gradeToExecute(cpy._gradeToExecute)
{
	//std::cout << "AForm copy constructor called." << std::endl;
	*this = cpy;
}

AForm& AForm:: operator=(const AForm& f)
{
	//std::cout << "AForm copy operator called." << std::endl;
	if (f._gradeToSign < 1 || f._gradeToExecute < 1)
		throw (AForm::GradeTooHighException());
	if (f._gradeToSign > 150 || f._gradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	if (this != &f)
		*this = f;
	return (*this);
}

str const AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeSigned() const
{
	return (_gradeToSign);
}

int AForm::getGradeExecuted() const
{
	return (_gradeToExecute);
}

void AForm::beSigned(Bureaucrat bur)
{
	if (_signed == true)
	{
		std::cout << this->_name << " has already been signed." << std::endl; 
		return ;
	}
	if (bur.getGrade() > _gradeToSign)
		throw (AForm::GradeTooHighException());
	_signed = true;
}

std::ostream& operator<<(std::ostream &out, AForm const &form)
{
	out << form.getName() << ", signed status: " << form.getSigned() << std::endl;
	out << "With a grade to signe of: " << form.getGradeSigned() << ", and a grade to execute of: " << form.getGradeExecuted() << std::endl;
	return (out);
}
