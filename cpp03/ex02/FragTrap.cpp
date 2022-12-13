/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:32:41 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 15:32:43 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap (name, 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap param Constructor called" << std::endl;
	this->name = name;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(name, 100, 100, 30)
{
	if (this != &ft)
		*this = ft;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &ft)
{
	this->name = ft.name;
	std::cout << "FragTrap assignement overload operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap hight fives done !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}
