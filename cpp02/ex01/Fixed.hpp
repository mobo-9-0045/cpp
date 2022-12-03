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

class Fixed
{
	private :
		int fixed_point;
		static const int bits = 8;
	public :
		Fixed();
		Fixed(int fixed_point);
		Fixed(Fixed &f);
		Fixed &operator=(Fixed &f);
		~Fixed();
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
