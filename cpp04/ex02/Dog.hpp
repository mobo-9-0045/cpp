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
# include"AAnimal.hpp"
# include"Brain.hpp"

class Dog : public AAnimal
{
	private : 
		Brain *b;
	public : 
		Dog();
		Dog(const Dog &d);
		Dog &operator= (Dog &d);

		std::string getType(void) const;
		void	makeSound(void) const;
		void	makeidea(std::string dog_idea);
		void	display_idea(void) const;
		~Dog();
};

#endif
