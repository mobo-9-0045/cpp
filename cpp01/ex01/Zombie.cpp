/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:30:15 by aomman            #+#    #+#             */
/*   Updated: 2022/11/22 15:30:16 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(void){}

void	Zombie::getName(std::string _name)
{
	name = _name;
	std::cout << "name : " << _name << std::endl;
}

void	Zombie::annonce(void)
{
	std::cout << name <<" : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){}