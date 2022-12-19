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
	std::cout << "Dog default constuctor called" << std::endl;
	this->type = "Dog";
	this->b = new Brain();
}

Dog::Dog(const Dog &d) : AAnimal()
{
	this->type = d.getType();
	this->b = new Brain(*d.b);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator = (Dog &d)
{
	this->type = d.type;
	this->b = d.b;
	std::cout << "Dog copy assaingement operatpr called" << std::endl;
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << this->type <<" sound" << std::endl;
}

void	Dog::makeidea(std::string dog_idea)
{
	int i;

	i = 0;
	while (i < 100)
	{
		if (this->b->getidea(i) == "")
		{
			this->b->setidea(i, dog_idea);
			return;
		}
		i++;
	}
	std::cout << "Dog brain is full" << std::endl;
}

void	Dog::display_idea(void) const
{
	int i;
	std::string str;

	i = 0;
	std::cout << "Dog idea : " << std::endl;
	while (i < 100)
	{
		str = this->b->getidea(i);
		if (str.empty())
			return ;
		std::cout << str << std::endl;
		i++;
	}
}

Dog::~Dog()
{
	delete this->b;
	std::cout << "Dog destructor called" << std::endl;
}
