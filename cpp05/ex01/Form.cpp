/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:53:42 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/22 16:53:43 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form():grade(0), ex_grade(0)
{
	this->indicator = false;
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, const int &grade, const int &ex_grade):
name(name), indicator(false), grade(grade), ex_grade(ex_grade)
{
	if (this->grade > 150)
		throw (GradeTooLowException());
	else if (this->grade < 1)
		throw (GradeTooHighException());
	std::cout << "Form param constructor called" << std::endl;
}
Form::Form(const Form &f):
name(f.name), indicator(f.indicator), grade(f.grade), ex_grade(f.ex_grade)
{
	if (this != &f)
		*this = f;
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &f)
{
	if (this != &f)
		*this = f;
	std::cout << "Form copy assignement operator called" << std::endl;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

std::string	Form::getName(void) const
{
	return (this->name);
}

int	Form::getGrade(void) const
{
	return (this->grade);
}

int	Form::getExGrade(void) const
{
	return (this->ex_grade);
}

void	Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() < 1)
		throw (GradeTooHighException());
	if (b.getGrade() > 150)
		throw (GradeTooLowException());
	if (b.getGrade() <= this->ex_grade)
		indicator = true;
}

void	Form::singForm(Bureaucrat b)
{
	if (this->indicator == true)
		std::cout << b.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << b.getName() << " couldn't sing" << this->getName() << " bcause grade is too low" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::ostream &operator<< (std::ostream &o, const Form &f)
{
	o << f.getName() << " " <<f.getGrade() << " " << f.getExGrade() << std::endl;
	return o;
}
