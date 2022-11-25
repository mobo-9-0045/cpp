/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cphone.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:58:23 by aomman            #+#    #+#             */
/*   Updated: 2022/11/15 18:58:25 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phone.hpp"

Cphone::Cphone(void){}

void    Cphone::add_contact(int i)
{
	std::cout << "Enter fist name : ";
	std::cin >> c[i].first_name;

	std::cout << "Enter nick name : ";
	std::cin >> c[i].nick_name;

	std::cout << "Enter last name : ";
	std::cin >> c[i].last_name;

	std::cout << "Enter phone Number : ";
	std::cin >> c[i].phone_number;
	return ;
}

void	Cphone::search()
{
	int i;

	std::cout << "please insert index : ";
	std::cin >> i;
	if (std::isalpha(i) == true)
	{
		std::cout << "Index must be a number" << std::endl;
		return ;
	}
	if (i <= 0 || i > 8)
	{
		std::cout << "please enter a nuber between 1 && 8" << std::endl;
		return ;
	}
	i--;
	if (c[i].first_name == "")
	{
		std::cout << "contact not found" << std::endl;
		return ;
	}
	if (c[i].nick_name == "")
	{
		std::cout << "contact not found" << std::endl;
		return ;
	}
	if (c[i].last_name == "")
	{
		std::cout << "contact not found" << std::endl;
		return ;
	}
	if (c[i].first_name.length() > 10)
		c[i].first_name[9] = '.';
	if (c[i].last_name.length() > 10)
		c[i].last_name[9] = '.';
	if (c[i].nick_name.length() > 10)
		c[i].nick_name[9] = '.';
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nick name";
	std::cout << "|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << i + 1;
	std::cout << "|";
	std::cout << std::setw(10) << c[i].first_name.substr(0, 10);
	std::cout << "|";
	std::cout << std::setw(10) << c[i].last_name.substr(0, 10);
	std::cout << "|";
	std::cout << std::setw(10) << c[i].nick_name.substr(0, 10);
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	return ;
}

Cphone::~Cphone(void){}
