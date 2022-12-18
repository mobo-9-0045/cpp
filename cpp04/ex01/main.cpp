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
	int i;
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	delete cat;
	delete dog;
	std::cout << "----------------array of animals----------------" << std::endl;
	Animal *a[4];
	i = 0;
	while (i < 4)
	{
		if (i % 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
		i++;
	}
	std::cout << "----------------animales sound----------------" << std::endl;
	i = 0;
	while (i < 4)
	{
		a[i]->makeSound();
		i++;
	}
	std::cout << "----------------deep copy test----------------" << std::endl;
	Cat *cat2 = new Cat();
	cat2->makeidea("...OHH FIIISH...");
	cat2->makeidea("...I WANNA PALY...");
	cat2->display_idea();
	std::cout << "----------------making deep copy----------------" << std::endl;
	Cat *cat3 = new Cat(*cat2);
	cat2->makeidea("...SLEEEP ZZZZZ !!!");
	cat2->display_idea();
	cat3->display_idea();
	std::cout << "----------------Copy assignement operatpr----------------" <<std::endl;
	Cat *cat4 = new Cat();
	std::cout << "----------------assign cat 3 to cat 4 ----------------" <<std::endl;
	*cat4 = *cat3;
	cat4->display_idea();
	cat3->makeidea("...I WOKE UP NOW !!");
	cat3->display_idea();
	cat4->display_idea();
	std::cout << "----------------destruction----------------" << std::endl;
	i = 0;
	while (i < 4)
	{
		delete a[i];
		i++;
	}
	delete cat2;
	delete cat3;
	delete cat4;
	return (0);
}
