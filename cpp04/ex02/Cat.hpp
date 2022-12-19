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
# include"AAnimal.hpp"
# include"Brain.hpp"

class Cat : public AAnimal
{
	private : 
		Brain *b;
	public : 
		Cat();
		Cat(const Cat &c);
		Cat &operator= (Cat &c);

		std::string getType(void) const;
		void	makeSound(void) const;
		void	makeidea(std::string cat_idea);
		void	display_idea(void) const;
		~Cat();
};

#endif
