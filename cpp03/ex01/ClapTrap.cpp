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
    std::cout << "Clap Copy constuctor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (ClapTrap &ct)
{
    this->name = ct.name;
    this->hit_point = ct.hit_point;
    this->energy_point = ct.energy_point;
    this->attack_damage = ct.attack_damage;
    return (*this);
}

void    ClapTrap::attack(const std::string &name)
{
    if (energy_point >= 5)
    {
        std::cout << "ClapTrape " << name << " attack " << this->name << ", causing " << this->attack_damage << " Point of damage" << std::endl;
        energy_point -= 5;
    }
    else
        std::cout << "no enough energy point" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_point = this->hit_point - amount;
    if (this->hit_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " took " << amount << " Of damage and is now knoked" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " took " << amount << " of damage and now onlye got " << this->hit_point << " point left" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->energy_point = this->energy_point + amount;
    this->hit_point = this->hit_point + amount;
    if (this->hit_point > 10)
    {
        this->hit_point = 10;
        std::cout << "you can't heal" << std::endl;
    }
    if (this->energy_point > 10)
    {
        this->energy_point = 10;
        std::cout << "you can't heal" << std::endl;
    }
    std::cout << "ClapTrap" << this->name << " was just repaired " << amount << " energie point, now he got " << this->hit_point << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "defualt destructor called" << std::endl;
}
