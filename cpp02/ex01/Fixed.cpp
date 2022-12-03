/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:51:05 by aomman            #+#    #+#             */
/*   Updated: 2022/12/02 11:51:53 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed_point)
{
	this->fixed_point = fixed_point;
}

Fixed::Fixed(Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(Fixed &f)
{
	setRawBits(f.getRawBits());
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

Fixed::Fixed(float point)
{
	this->point = point;
}

float	Fixed::toFloat(void) const
{
	//that converts the fixed-point value to a floating-point value;
	return (this->point)
}

int 	Fixed::toInt(void) const
{
	//that converts the fixed-point value to an integer value.
	return (fixed_point);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
