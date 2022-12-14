/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:14:02 by aomman            #+#    #+#             */
/*   Updated: 2022/12/05 12:14:04 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed
{
	private :
		int fixed_point;
		static const int fractbits = 8;
	public :
		Fixed();
		Fixed(Fixed const &f);
		int operator < (Fixed const &f) const;
		int operator > (Fixed const &f) const;
		bool operator >= (Fixed const &f);
		bool operator <= (Fixed const &f);
		bool operator == (Fixed const &f);
		bool operator != (Fixed const &f);
		Fixed &operator = (Fixed const &f);

		Fixed operator + (Fixed const &f) const;
		Fixed operator - (Fixed const &f) const;
		Fixed operator * (Fixed const &f) const;
		Fixed operator / (Fixed const &f) const;

		Fixed operator ++ (void);//++F
		Fixed operator -- (void);//--F
		Fixed operator ++ (int inc);//F++
		Fixed operator -- (int inc);//F--

		Fixed(int const num);
		Fixed(float const point);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static Fixed &min (Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static Fixed &max (Fixed &a, Fixed &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
		~Fixed();
};

std::ostream &operator << (std::ostream &o, Fixed const &f);
#endif
