/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:46:09 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/18 12:46:11 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include<iostream>

class WrongAnimal
{
	protected : 
		std::string type;
	public : 
		WrongAnimal();
		WrongAnimal (WrongAnimal &wa);
		WrongAnimal &operator = (const WrongAnimal &wa);
		std::string gettype(void) const;
		void	makeSound(void) const;
		~WrongAnimal();
};

#endif
