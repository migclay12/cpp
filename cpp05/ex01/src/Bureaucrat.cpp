/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:49:35 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 11:58:58 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Undefined")
{
	//std::cout << "Bureaucrat default constructor called." << std::endl;
	_grade = 150;
}

Bureaucrat:: Bureaucrat(str name, int grade) : _name(name)
{
	//std::cout << "Bureaucrat base constructor called." << std::endl;
	if (grade < 1)
		throw (Bureaucrat:: GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat:: GradeTooLowException());
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat default destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name)
{
	//std::cout << "Bureaucrat copy constructor called." << std::endl;
	_grade = cpy._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
	//std::cout << "Bureaucrat copy opperator called." << std::endl;
	if (cpy._grade < 1)
		throw (Bureaucrat:: GradeTooHighException());
	if (cpy._grade > 150)
		throw (Bureaucrat:: GradeTooLowException());
	_grade = cpy._grade;
	return (*this);
}

const str Bureaucrat::getName() const
{
	return(_name);
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

void Bureaucrat::gradeDecrement()
{
	if (_grade + 1 > 150)
		 throw (Bureaucrat::GradeTooLowException());
	else
		_grade++;
}

void Bureaucrat::gradeIncrement()
{
	if (_grade - 1 < 1)
		 throw (Bureaucrat::GradeTooHighException());
	else
		_grade--;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (out);
}

void Bureaucrat:: signForm(Form& form)
{
	try
	{
		if (_grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		if (_grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		form.beSigned(*this);
		std::cout << _name << " signed form: " <<  form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << getName() << " couldn't sign \"" << form.getName() << "\" because: " << e.what() << std::endl;
	}
}
