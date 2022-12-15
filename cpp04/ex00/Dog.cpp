/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:28:50 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/15 16:28:51 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constuctor called" << std::endl;
}

Dog::Dog(Dog &d) : Animal()
{
	if (this != &d)
		*this = d;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &d)
{
	this->type = d.type;
	std::cout << "Dog copy assaingement operatpr called" << std::endl;
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
