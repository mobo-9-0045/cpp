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
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main(void)
{
	//error cuz wrong animal has no virtual member functions in vtable not created
	const WrongAnimal *wa = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();
	//inhiert will work correctly cuz animal class has a vtable created
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << wa->gettype() << std::endl;
	std::cout << wc->gettype() << std::endl;

	j->makeSound();
	i->makeSound();
	wa->makeSound();
	wc->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wa;
	delete wc;
	return (0);
}
