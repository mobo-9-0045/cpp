/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:29:53 by aomman            #+#    #+#             */
/*   Updated: 2022/11/22 15:29:55 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *z;
    z = new Zombie();
    z->getName(name);
    z->annonce();
    delete (z);
    return (z);
}
