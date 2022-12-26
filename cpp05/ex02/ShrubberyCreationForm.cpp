/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:45:17 by mobo              #+#    #+#             */
/*   Updated: 2022/12/24 15:45:36 by mobo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberr", 145, 137)
{
	std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shruberr", 145, 137)
{
	this->target = target;
	std::cout << "Shrubbery Param constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Sh) : Form()
{
	if (this != &Sh)
		*this = Sh;
	std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Sh)
{
	if (this != &Sh)
		*this = Sh;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string outfname;

	if (executor.getGrade() > 137)
		throw (Form::GradeTooLowException());
	else
	{
		outfname = std::string(target + "_shrubbery");
		std::ofstream f(outfname.c_str(), std::ios::out | std::ios::trunc);
		f<<
		"              * *\n"
		"           *    *  *\n"
		"      *  *    *     *  *\n"
		"     *     *    *  *    *\n"
		" * *   *    *    *    *   *\n"
		" *     *  *    * * .#  *   *\n"
		" *   *     * #.  .# *   *\n"
		"  *     \"#.  #: #\" * *    *\n"
		" *   * * \"#. ##\"       *\n"
		"   *       \"###\n"
		"             \"##\n"
		"              ##.\n"
		"              .##:\n"
		"              :###\n"
		"              ;###\n"
		"            ,####.\n"
		"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
		f.close();
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}
