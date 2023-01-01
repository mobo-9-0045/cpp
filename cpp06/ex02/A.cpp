/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:39:17 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 12:39:19 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"A.hpp"

A::A()
{
	std::cout << "A default constructor called" << std::endl;
}

A::A(const A &a) : Base()
{
	if (this != &a)
		*this = a;
	std::cout << "A copy constructor called" << std::endl;
}

A &A::operator = (const A &a)
{
	if (this != &a)
		*this = a;
	std::cout << "A copy assignement operator called" << std::endl;
	return (*this);
}

A::~A()
{
	std::cout << "A destructor called" << std::endl;
}
