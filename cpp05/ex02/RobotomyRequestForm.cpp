/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:48:51 by mobo              #+#    #+#             */
/*   Updated: 2022/12/24 15:48:53 by mobo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RoboTomyRequestForm", 72, 45)
{
	std::cout << "Robot default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RoboTomyRequestForm", 72, 45)
{
	this->target = target;
	std::cout << "Robot param constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &R) : Form()
{
	if (this != &R)
		*this = R;
	std::cout << "Robot copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &R)
{
	this->target = R.target;
	std::cout << "Robot copy assignement operator called" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &execor) const
{
	if (execor.getGrade() > 45)
		throw(Form::GradeTooLowException());
	else
	{
		std::cout << "*...Drilling Noises..." << std::endl;
		std::srand(time(NULL));
		if (std::rand() % 2)
			std::cout << this->target << " has been successfully robotimized!!" << std::endl;
		else
			std::cout << this->target << " Robotimy failed!" << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robot destructor called" << std::endl;
}
