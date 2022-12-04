/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:00:11 by aomman            #+#    #+#             */
/*   Updated: 2022/12/02 16:00:12 by aomman           ###   ########.fr       */
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

		Fixed(int const num);
		Fixed(float const point);

		Fixed(Fixed const &f);
		Fixed &operator = (Fixed const &f);

		float	toFloat(void) const;
		int 	toInt(void) const;

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);

		~Fixed();
};

std::ostream &operator << (std::ostream &o, Fixed const &f);

#endif
