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
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->b = new Brain();
}

Cat::Cat(const Cat &c) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = c.getType();
	this->b = new Brain(*c.b);
}

Cat &Cat::operator=(Cat &c)
{
	this->type = c.type;
	this->b = c.b;
	std::cout << "Cat copy assaingement operator called" << std::endl;
	return (*this);
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout <<this->type <<  " sound" << std::endl;
}


void	Cat::makeidea(std::string cat_idea)
{
	int i;

	i = 0;
	while(i < 100)
	{
		if (this->b->getidea(i) == "")
		{
			this->b->setidea(i, cat_idea);
			return;
		}
		i++;
	}
	std::cout << "Cat'brain is Full" << std::endl;
}

void	Cat::display_idea(void) const
{
	int i;

	std::string str;
	std::cout << "cat'ideas : " << std::endl;
	i = 0;
	while (i < 100)
	{
		str = this->b->getidea(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
		i++;
	}
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->b;
}
