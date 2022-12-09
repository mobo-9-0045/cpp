/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:42:13 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/09 11:42:14 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
{
    std::cout << "Inisialisation constructor called" << std::endl;
    this->name = name;
    this->hit_point = hp;
    this->energy_point = ep;
    this->attack_damage = ad;
}

ClapTrap::ClapTrap(ClapTrap &ct)
{
    if (this != &ct)
        *this = ct;
    std::cout << "Copy constuctor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "defualt destructor called" << std::endl;
}
