/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:48:38 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/19 12:48:39 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include<iostream>

class AAnimal
{
	protected : 
		std::string type;
	public : 
		AAnimal();
		AAnimal(const AAnimal &A);
		AAnimal &operator = (const AAnimal &A);

		std::string get_type(void) const;
		virtual void makeSound(void) const = 0;
		virtual ~AAnimal();
};

#endif
