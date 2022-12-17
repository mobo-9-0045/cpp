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
	const Animal *a;
	a = new Cat();
	const Animal *b;
	b = new Cat();
	a = b;
	std::cout << a->getType() << std::endl;
	delete a;
	delete b;
	return (0);
}
