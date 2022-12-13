/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:12:58 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/12 14:12:59 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScravTrap Param Constructor called" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &st) : ClapTrap(name , 100, 50, 20)
{
	if (this != &st)
		*this = st;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &st)
{
	this->name = st.name;
	std::cout << "ScavTrap Copy assingement overload operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (energy_point >= 5 && hit_point >= 5)
	{
		std::cout << name << " attack " << target << ", causing " << attack_damage << " Point of damage" << std::endl;
		energy_point -= 5;
	}
	if (energy_point == 0 || hit_point == 0)
		std::cout << "no enough energy point" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scrav is in keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}