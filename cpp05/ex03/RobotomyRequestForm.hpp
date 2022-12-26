/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:48:58 by mobo              #+#    #+#             */
/*   Updated: 2022/12/24 15:48:59 by mobo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
# include"Form.hpp"
# include<cstdlib>
class RobotomyRequestForm : public Form
{
	private : 
		std::string target;
	public : 
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &R);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &R);

		void	execute(Bureaucrat const &executor) const;
		
		~RobotomyRequestForm();
};

#endif
