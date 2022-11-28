/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:00:04 by aomman            #+#    #+#             */
/*   Updated: 2022/11/28 18:00:16 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapb(NULL)
{
	this->nameB = name;
	std::cout << "HumanB " << nameB << " created with no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapb)
{
	this->weapb = &weapb;
}

void	HumanB::attack()
{
	std::cout << nameB << " attack with his " << weapb->getType() << std::endl;
}

HumanB::~HumanB(){}