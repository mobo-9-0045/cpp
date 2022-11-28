/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:00:24 by aomman            #+#    #+#             */
/*   Updated: 2022/11/28 18:00:26 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private :
		std::string	nameB;
		Weapon *weapb;
	public :
		HumanB(std::string name);
		void	setWeapon(Weapon &weapb);
		void	attack();
		~HumanB();
};

#endif
