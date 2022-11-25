/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:58:38 by aomman            #+#    #+#             */
/*   Updated: 2022/11/15 18:58:40 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phone.hpp"

int main()
{
	Cphone ph;
	int     i;

	i = 0; 
	while (i <= 8)
	{
		std::string cmd;
		std::cout << "Enter a cmd : ";
		std::cin >> cmd;
		if (cmd == "add")
		{
			ph.add_contact(i);
			i++;
		}
		else if (cmd == "search")
			ph.search();
		else if (cmd == "exit")
			exit (1);
		else
			std::cout << "invalid command" << std::endl;
		if (i == 8)
			i--;
	}
	return (0);
}
