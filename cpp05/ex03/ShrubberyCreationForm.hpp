/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:49:18 by mobo              #+#    #+#             */
/*   Updated: 2022/12/24 15:49:19 by mobo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include"Form.hpp"
# include<fstream>

class ShrubberyCreationForm : public Form
{
	private :
		std::string	target;
	public : 
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &targer);
		ShrubberyCreationForm(const ShrubberyCreationForm &Sh);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &Sh);

		void execute(Bureaucrat const &executor) const;
		
		virtual ~ShrubberyCreationForm();
};

#endif
