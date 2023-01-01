/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:10:36 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 12:24:23 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

Base::Base()
{
	std::cout << "Base default constructor called" << std::endl;
}

Base::Base(const Base &b)
{
	if (this != &b)
		*this = b;
	std::cout << "Base copy constructor called" << std::endl;
}

Base &Base::operator = (const Base &b)
{
	if (this != &b)
		*this = b;
	std::cout << "Base copy assigenement operator called" << std::endl;
	return (*this);
}

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

