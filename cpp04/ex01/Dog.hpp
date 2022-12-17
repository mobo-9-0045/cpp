/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:28:29 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/15 16:28:31 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP
# include"Animal.hpp"
# include"Brain.hpp"

class Dog : public Animal
{
	private : 
		Brain *b;
		std::string type;
	public : 
		Dog();
		Dog(Dog &d);
		Dog &operator= (const Dog &d);

		std::string getType(void) const;
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
		
		~Dog();
};

#endif
