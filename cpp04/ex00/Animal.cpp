/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:44:14 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/15 17:13:29 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
	this->type = "Aimale";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	if (this != &a)
		*this = a;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal &Animal::operator= (const Animal &a)
{
	this->type = a.type;
	std::cout << "Animal copy assignement overload operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
