/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:06:01 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 14:06:03 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
{
	std::cout << "ClapTrap Pram Constructor called" << std::endl;
	this->name = name;
	this->hit_point = hp;
	this->energy_point = ep;
	this->attack_damage = ad;
}

ClapTrap::ClapTrap(ClapTrap &cp)
{
	if (this != &cp)
		*this = cp;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &cp)
{
	this->name = cp.name;
	this->hit_point = cp.hit_point;
	this->energy_point = cp.energy_point;
	this->attack_damage = cp.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_point >= 5)
	{
		std::cout << this->name << " attack " << target << " causing " << this->attack_damage << " Point of damage" << std::endl;
		this->energy_point -= 5;
	}
	if (hit_point <= 0 || energy_point <= 0)
		std::cout << "not enough energy point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_point = this->hit_point - amount;
	if (this->hit_point <= 0)
		std::cout << this->name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->energy_point = this->energy_point + amount;
	this->hit_point = this->hit_point + amount;
	if (this->hit_point > 100)
	{
		this->hit_point = 100;
		std::cout << "you can't heal" << std::endl;
	}
	if (this->energy_point > 100)
	{
		this->energy_point = 100;
		std::cout << "you can't add energy point" << std::endl;
	}
	std::cout << this->name << " Repaired Successfully with " << amount << " point " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
 