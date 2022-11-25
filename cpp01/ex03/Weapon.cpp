/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:26:52 by aomman            #+#    #+#             */
/*   Updated: 2022/11/25 14:26:53 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string Type)
{
	this->Type = Type;
}

void	Weapon::setType(std::string Type)
{
	std::cout << Type << std::endl;
	this->Type = Type;
}

std::string	Weapon::getType()
{
	return (this->Type);
}

Weapon::~Weapon(){}
