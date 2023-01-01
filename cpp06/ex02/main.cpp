/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:10:20 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 12:25:14 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

int main(void)
{
	Base *b = new Base();
	A *a = new A();
	B *b1 = new B();
	C *c = new C();

	delete b;
	delete a;
	delete b1;
	delete c;
	return (0);
}

