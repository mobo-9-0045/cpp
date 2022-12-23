/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:53:37 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/22 16:53:38 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include<iostream>
# include"Bureaucrat.hpp"

class Form
{
	private : 
		const std::string	name;
		bool				indicator;
		const int			grade;
		const int			ex_grade;
	public :
		Form();
		Form(const std::string &name, const int &grade, const int &ex_grade);
		Form(const Form &f);
		Form &operator = (const Form &f);
		class	GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public : 
				virtual const char *what() const throw();
		};
		std::string getName(void) const;
		int			getGrade(void) const;
		int			getExGrade(void) const;
		void		beSigned(Bureaucrat b);
		void		singForm(Bureaucrat b);
		~Form();
};

std::ostream &operator << (std::ostream &o, const Form &f);

#endif
