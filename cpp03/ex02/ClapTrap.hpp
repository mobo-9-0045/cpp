/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:06:10 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 14:06:11 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap
{
	protected :
		std::string name;
		int         hit_point;
		int         energy_point;
		int         attack_damage;
	public :
		ClapTrap();
		ClapTrap(std::string name, int hp, int ep, int ad);
		ClapTrap(ClapTrap &ct);
		ClapTrap &operator = (ClapTrap const &ct);

		void    attack(const std::string &target);
		void    takeDamage(unsigned int amount);
		void    beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif
