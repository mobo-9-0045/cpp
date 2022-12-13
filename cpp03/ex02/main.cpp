/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:05:47 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 14:05:49 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"

int main()
{
	ClapTrap c1("Mobo", 100, 100, 10);
	FragTrap f1("Fmobo");
	f1.highFivesGuys();
	c1.attack("z");
	c1.takeDamage(100);
	c1.beRepaired(9);
	return (0);
}
