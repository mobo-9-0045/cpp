/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:42:28 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/19 14:42:29 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include<iostream>
// # include<exception>

class Bureaucrat
{
	private : 
		const std::string	name;
		int					grade;
	public : 
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &B);
		Bureaucrat &operator=(const Bureaucrat &B);
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
		void	setGrade(int grade);
		std::string getName(void) const;
		int	getGrade(void) const;
		void	increment(int inc_grad);
		void	decrement(int dec_grad);
		~Bureaucrat();
};

std::ostream &operator << (std::ostream &o, const Bureaucrat &b);

#endif
