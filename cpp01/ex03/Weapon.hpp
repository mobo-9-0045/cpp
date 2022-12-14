/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:26:40 by aomman            #+#    #+#             */
/*   Updated: 2022/11/25 14:26:42 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define	WEAPON_HPP
# include<iostream>

class Weapon
{
	private :
		std::string	Type;
	public :
		Weapon(std::string Type);
		void		setType(std::string Type);
		std::string	getType();
		~Weapon();
};

#endif
