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

//constructor that take const int
Fixed::Fixed(int num)
{
	std::cout << "int constructor called" << std::endl;
	//shift left by 8 bits ?
	setRawBits (num << this->fractbits);
}

//A constructor that takes a constant floating-point number as a parameter.
//It converts it to the corresponding fixed-point value. ex01
Fixed::Fixed(float point)
{
	std::cout << "flaot constructor called" << std::endl;
	this->setRawBits ((int)roundf (point * (1 << this->fractbits)));
}

//cooy constructer
Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	setRawBits(f.getRawBits());
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

//that converts the fixed-point value to a floating-point value;
float	Fixed::toFloat(void) const
{
	float f;

	f = (float)(this->getRawBits() / (float)(1 << this->fractbits));
	return (f);
}

//that converts the fixed-point value to an integer value.
int 	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->fractbits);
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

std::ostream &operator << (std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
