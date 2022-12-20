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
		throw GradeTooHighException();
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

// void	Bureaucrat::GradeTooLowException(void) const
// {
// 	try
// 	{
// 		if (this->grade < 1)
// 			throw (this->grade);
// 	}
// 	catch(std::exception &grad)
// 	{
// 		std::cout << "Grade must be 1 or more" << std::endl;
// 	}
	
// }

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooHighException();
	this->grade = grade;
}

std::string	Bureaucrat::getName(void)
{
	return (this->name);
}

int	Bureaucrat::getGrade(void)
{
	return (this->grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destrcutor called" << std::endl;
}
