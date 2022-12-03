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
		float point;
		static const int fbits = 8;
	public :
		Fixed();
		Fixed(const int fixed_point);
		Fixed(float point);
		Fixed(Fixed &f);
		Fixed &operator=(Fixed &f);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int toInt(void) const;
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
