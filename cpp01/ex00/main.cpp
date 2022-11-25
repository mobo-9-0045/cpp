/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:29:40 by aomman            #+#    #+#             */
/*   Updated: 2022/11/22 15:29:41 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *z1 = new Zombie();
	Zombie *z2 = new Zombie();
	Zombie *z3 = new Zombie();
	z1->randomChump("F1");
	z2->randomChump("F2");
	z3->randomChump("F3");
	delete (z1);
	delete (z2);
	delete(z3);
}