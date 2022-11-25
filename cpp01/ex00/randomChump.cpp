/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:30:06 by aomman            #+#    #+#             */
/*   Updated: 2022/11/22 15:30:07 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie *z1 = new Zombie();
	z1->newZombie(name);
	delete (z1);
}
