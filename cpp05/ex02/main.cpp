/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:26:20 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/19 13:26:22 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"Intern.hpp"
int main(void)
{
	try
	{
		Bureaucrat b("Bureacrat", 130);
		ShrubberyCreationForm Sh("Sh");
		Sh.execute(b);
	}
	catch(const std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureacrat", 40);
		RobotomyRequestForm R("Ro");
		R.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureacrat", 4);
		PresidentialPardonForm P("Pr");
		P.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	
	return (0);
}
