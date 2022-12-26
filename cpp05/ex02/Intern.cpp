/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:04:11 by mobo              #+#    #+#             */
/*   Updated: 2022/12/26 17:04:13 by mobo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &i)
{
	if (this != &i)
		*this = i;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &i)
{
	if (this != &i)
		*this = i;
	std::cout << "Intern copy assignement operator called" << std::endl;
	return (*this);
}

const char *Intern::FormNotFound::what() const throw()
{
	return ("Form not found");
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	int i;

	t_formList forms[] =
	{
		{"Shrubbery creation", new ShrubberyCreationForm(target)},
		{"Robotomy Request", new RobotomyRequestForm(target)},
		{"President Pardon", new PresidentialPardonForm(target)},
		{"", NULL}
	};
	Form *resForm = NULL;
	i = 0;
	while (forms[i].formType != NULL)
	{
		if (forms[i].formName == name)
			resForm = forms[i].formType;
		else
			delete forms[i].formType;
		i++;
	}
	if (resForm == NULL)
		throw (FormNotFound());
	else
		std::cout << "Inter creates " << name << std::endl;
	return resForm;
}
