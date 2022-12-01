/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:37:55 by aomman            #+#    #+#             */
/*   Updated: 2022/11/30 18:37:56 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl(){}

void	harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup" << std::endl;
	std::cout << "burger. I really do!" << std::endl;
}

void	harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t putenough bacon in my burger! If you did, "<< std::endl;
	std::cout << "I wouldn’t be asking for more!" << std::endl;
}

void	harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void	harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	harl::complain(std::string level)
{
	int i;

	i = 0;
	std::string lvl[4] = {"debug", "info", "warning", "error"};
	void	(harl::*pmf[4])() = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	while (i < 4)
	{
		if (lvl[i] == level)
		{
			int j;
			j = i;
			while (j < 4)
			{
				(this->*pmf[j])();
				j++;
			}
		}
		i++;
	}
}

harl::~harl(){}
