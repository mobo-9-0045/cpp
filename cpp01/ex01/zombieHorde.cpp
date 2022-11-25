/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:12:10 by aomman            #+#    #+#             */
/*   Updated: 2022/11/24 09:12:12 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie *Z;
	Z = new Zombie[N];
	while (i < N)
	{
		Z[i].getName(name);
		Z[i].annonce();
		i++;
	}
	delete []Z;
	return (Z);
}