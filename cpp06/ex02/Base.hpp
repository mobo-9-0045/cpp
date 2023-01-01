/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:10:43 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 12:17:24 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include<iostream>

class	Base
{
	public : 
		Base();
		Base(const Base &b);
		Base &operator = (const Base &b);
		virtual ~Base();
};

#endif

