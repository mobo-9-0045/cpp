/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:10:36 by aomman            #+#    #+#             */
/*   Updated: 2023/01/02 17:33:32 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base *generate(void)
{
	srand(time(NULL));
	int random = rand();
	if (random % 3)
		return (new A);
	if (random % 2)
		return (new B);
	else
		return (new C);
	return (new B);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))//downcasting
		std::cout << "Class A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
}

void	identify(Base &p)
{
	Base tmp;
	try
	{
		tmp = dynamic_cast<A &>(p);
		std::cout << "Class A" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		tmp = dynamic_cast<B &>(p);
		std::cout << "Class B" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		tmp = dynamic_cast<C &>(p);
		std::cout << "Class C" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

