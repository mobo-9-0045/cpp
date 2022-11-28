/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:15 by aomman            #+#    #+#             */
/*   Updated: 2022/11/25 16:12:16 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include"Weapon.hpp"

class HumanA
{
	private :
		std::string nameA;
		Weapon &wA;
	public :
		HumanA(std::string name, Weapon &weap);
		void    attack();
		~HumanA();
};

#endif
