/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:31:20 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/13 16:31:22 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"

int main(void)
{
	Cat *cat = new Cat();

	cat->getBrain();
	// cat->makeidea("...SHHHHH...");
	// cat->display_idea();
	delete cat;
	return (0);
}
