/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:33:19 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 15:33:21 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public : 
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap (const FragTrap &ft);
		FragTrap &operator= (const FragTrap &ft);
		void	highFivesGuys(void);
		~FragTrap();
};

#endif
