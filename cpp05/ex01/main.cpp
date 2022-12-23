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

#include"Bureaucrat.hpp"
#include"Form.hpp"
int main(void)
{
	try
	{
		Form f("Form", 150, 12);
		Bureaucrat b1("MoBo", 13);
		f.beSigned(b1);
		f.singForm(b1);
		std::cout << b1;
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}
