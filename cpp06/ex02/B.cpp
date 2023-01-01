/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:39:36 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 12:39:37 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"B.hpp"

B::B()
{
	std::cout << "B default constructor called" << std::endl;
}

B::B(const B &b) : Base()
{
	if (this != &b)
		*this = b;
	std::cout << "B copy constructor called" << std::endl;
}

B &B::operator = (const B &b)
{
	if (this != &b)
		*this = b;
	std::cout << "B copy assignement operator called" << std::endl;
	return (*this);
}

B::~B()
{
	std::cout << "B destructor called" << std::endl;
}
