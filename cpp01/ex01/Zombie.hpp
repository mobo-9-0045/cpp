/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:30:23 by aomman            #+#    #+#             */
/*   Updated: 2022/11/22 15:30:24 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<new>

class Zombie
{
	private:
		std::string name;
	public :
		void	getName(std::string name);
		Zombie* zombieHorde(int N, std::string name);
		void	annonce(void);
		Zombie(void);
		~Zombie(void);
};
