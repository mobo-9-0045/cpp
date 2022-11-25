/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:27 by aomman            #+#    #+#             */
/*   Updated: 2022/11/25 16:12:28 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weap) : nameA(name), wA(weap){}

void	HumanA::attack()
{
	std::cout << nameA << " : Attack with thier " << wA.getType() << std::endl;
	return ;
}

HumanA::~HumanA(){}
