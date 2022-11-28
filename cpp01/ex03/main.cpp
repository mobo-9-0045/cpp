/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:26:32 by aomman            #+#    #+#             */
/*   Updated: 2022/11/25 14:26:33 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"

int	main()
{
	{
		Weapon w = Weapon("D-eagle");
		HumanA hA("MoBo", w);
		hA.attack();
		w.setType("M421");
		hA.attack();
	}
	{
		Weapon w = Weapon("M421");
		HumanB hb ("MoBo b");
		hb.setWeapon(w);
		hb.attack();
		w.setType("D-eagle");
		hb.attack();
	}
	return (0);
}
