/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:49:34 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/09 10:49:37 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap cp1("mobo", 10, 10, 0);
    ClapTrap cp2(cp1);
    cp2.takeDamage(5);
    cp2.takeDamage(2);
    cp2.takeDamage(3);
    cp2.beRepaired(11);
    return (0);
}
