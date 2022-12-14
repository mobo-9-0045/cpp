/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:11:18 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/15 19:11:19 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP
# include"Animal.hpp"

class Cat : public Animal
{
	private : 
		std::string type;
	public : 
		Cat();
		Cat(Cat &c);
		Cat &operator= (const Cat &c);

		std::string getType(void) const;
		void	makeSound(void) const;

		~Cat();
};

#endif
