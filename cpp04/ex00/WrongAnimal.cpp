/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:46:24 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/18 12:46:25 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal type";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &wa)
{
	if (this != &wa)
		*this = wa;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wa)
{
	this->type = wa.type;
	std::cout << "WrongAnimal copy assignememt copy constructor called" << std::endl;
	return (*this);
}

std::string WrongAnimal::gettype(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal Sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WongAnimal destructor called" << std::endl;
}
