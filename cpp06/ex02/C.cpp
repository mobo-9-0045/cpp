/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:39:50 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 12:39:51 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"C.hpp"

C::C()
{
	std::cout << "C default constructor called" << std::endl;
}

C::C(const C &c) : Base()
{
	if (this != &c)
		*this = c;
	std::cout << "C copy constructor called" << std::endl;
}

C &C::operator = (const C &c)
{
	if (this != &c)
		*this = c;
	std::cout << "C copy assignement operator called" << std::endl;
	return (*this);
}

C::~C()
{
	std::cout << "C destructor called" << std::endl;
}
