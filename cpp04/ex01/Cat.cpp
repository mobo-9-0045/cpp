/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:11:07 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/15 19:11:12 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	b = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat &c) : Animal()
{
	if (this != &c)
		*this = c;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
	this->type = c.type;
	std::cout << "Cat copy assaingement operator called" << std::endl;
	return (*this);
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->b);
}

Cat::~Cat()
{
	delete b;
	std::cout << "Cat destructor called" << std::endl;
}
