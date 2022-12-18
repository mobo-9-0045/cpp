/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:45:54 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/18 12:45:56 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrong cat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &wc) : WrongAnimal()
{
	if (this != &wc)
		*this = wc;
	std::cout << "WrongCat copy constuctor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &wc)
{
	this->type = wc.type;
	std::cout << "WrongCat copy assignement overload operator called" << std::endl;
	return (*this);
}

std::string WrongCat::gettype(void) const
{
	return (this->type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
