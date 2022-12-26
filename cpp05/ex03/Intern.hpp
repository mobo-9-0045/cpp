/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:04:19 by mobo              #+#    #+#             */
/*   Updated: 2022/12/26 17:04:21 by mobo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern
{
	private : 
		typedef	struct s_formList
		{
			std::string formName;
			Form	*formType;
		}	t_formList;
	public:
		Intern();
		Intern(const Intern &i);
		Intern &operator = (const Intern &i);
		Form *makeForm(const std::string &name, const std::string &target);
		class FormNotFound : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

#endif
