/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:42:18 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/19 14:42:20 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (this->grade > 150)
		throw (GradeTooLowException());
	else if (this->grade < 1)
		throw (GradeTooHighException());
	std::cout << "Bureaucrat param constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &B) : name(B.name), grade(B.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &B)
{
	this->grade = B.grade;
	std::cout << "Bureaucrat copy assignement operator called" << std::endl;
	return (*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too hight");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw (GradeTooHighException());
	else if (grade < 1)
		throw (GradeTooLowException());
	this->grade = grade;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increment(int inc_grade)
{
	this->setGrade(this->getGrade() - inc_grade);
	if (this->getGrade() < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::decrement(int dec_grade)
{
	this->setGrade(this->getGrade() + dec_grade);
	if (this->getGrade() > 150)
		throw (GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destrcutor called" << std::endl;
}

std::ostream &operator<< (std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return o;
}
