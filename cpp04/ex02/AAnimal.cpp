/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:47:55 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/19 12:48:23 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "AAnimale default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &A)
{
	if (this != &A)
		*this = A;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator = (const AAnimal &A)
{
	this->type = A.type;
	std::cout << "AAnimal copy assignement operator called" << std::endl;
	return (*this);
}

std::string AAnimal::get_type(void) const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << this->type << " generic sound" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}
