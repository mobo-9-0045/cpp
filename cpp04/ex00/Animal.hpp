/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animale.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:44:20 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 16:44:21 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected : 
		std::string type;
	public : 
		Animal();
		Animal(const Animal &a);
		Animal &operator = (const Animal &a);

		virtual std::string getType (void) const;
		virtual void	makeSound() const;

		virtual ~Animal();
};

#endif
