/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:13:06 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/12 14:13:08 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public : 
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &st);
        ScavTrap &operator= (ScavTrap const &St);

        void    attack(const std::string &target);
        void    guardGate();
        ~ScavTrap();
};

std::ostream &operator << (std::ostream const &o, ScavTrap const &st);

#endif
