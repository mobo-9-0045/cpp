/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:45:43 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/18 12:45:44 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
# include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private : 
		std::string type;
	public : 
		WrongCat();
		WrongCat(WrongCat &wc);
		WrongCat &operator = (const WrongCat &wc);

		std::string gettype(void) const;
		void	makeSound(void) const;

		~WrongCat();
};

#endif
