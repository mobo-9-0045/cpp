/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:10:43 by aomman            #+#    #+#             */
/*   Updated: 2023/01/02 17:31:46 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include<iostream>


class	Base
{
	public :
		virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
