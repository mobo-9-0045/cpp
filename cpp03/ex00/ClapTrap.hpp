/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:42:20 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/09 11:42:21 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap
{
    private :
        std::string name;
        int         hit_point;
        int         energy_point;
        int         attack_damage;
    public :
        ClapTrap();
        ClapTrap(std::string name, int hp, int ep, int ad);
        ClapTrap(ClapTrap &ct);
        // ClapTrap &operator = (ClapTrap &ct);

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif
