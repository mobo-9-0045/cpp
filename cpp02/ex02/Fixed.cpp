/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:13:33 by aomman            #+#    #+#             */
/*   Updated: 2022/12/05 12:13:34 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::Fixed(Fixed const &f)
{
	this->fixed_point = f.fixed_point;
}

Fixed &Fixed::operator = (Fixed const &f)
{
	if (this != &f)
		this->fixed_point = f.fixed_point;
	return (*this);
}
// < oper
int Fixed::operator < (Fixed const &f) const
{
	if (this->fixed_point < f.fixed_point)
		return (0);
	return (1);
}

// > 

int Fixed::operator > (Fixed const &f) const
{
	if (this->fixed_point > f.fixed_point)
		return (0);
	return (1);
}
// >=
bool Fixed::operator >= (Fixed const &f)
{
	if (this->fixed_point >= f.fixed_point)
		return (0);
	return (1);
}

// <=
bool Fixed::operator <= (Fixed const &f)
{
	if (this->fixed_point <= f.fixed_point)
		return (0);
	return (1);
}

// == oper
bool Fixed::operator == (Fixed const &f)
{
	if (this->fixed_point == f.fixed_point)
		return (0);
	return (1);
}

// != oper
bool Fixed::operator != (Fixed const &f)
{
	if (this->fixed_point != f.fixed_point)
		return (0);
	return (1);
}

// -
Fixed Fixed::operator - (Fixed const &f) const
{
	Fixed ret(this->toFloat() - f.toFloat());
	return (ret);
}

// *
Fixed Fixed::operator * (Fixed const &f) const
{
	Fixed ret(this->toFloat() * f.toFloat());
	return (ret);
}

//  /

Fixed Fixed::operator / (Fixed const &f) const
{
	Fixed ret(this->toFloat() / f.toFloat());
	return (ret);
}

// ++F

Fixed Fixed::operator ++ (void)
{
	this->fixed_point++;
	return (*this);
}

//--F

Fixed Fixed::operator -- (void)
{
	this->fixed_point--;
	return (*this);
}

//F++
Fixed Fixed::operator ++ (int)
{
	Fixed tmp;
	tmp = *this;
	this->fixed_point++;
	return (tmp);
}

//F--

Fixed Fixed::operator -- (int)
{
	Fixed tmp;
	tmp = *this;
	this->fixed_point--;
	return (tmp);
}

Fixed::Fixed(int const num)
{
	this->fixed_point = (num << this->fractbits);
}

Fixed::Fixed(float const point)
{
	this->fixed_point = ((int)(roundf(point * (1 << this->fractbits))));
}

float	Fixed::toFloat(void) const
{
	float f;

	f = (float)getRawBits() / (float)(1 << this->fractbits);
	return (f);
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point >> this->fractbits);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if ( a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator << (std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}

Fixed::~Fixed(){}
