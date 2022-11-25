/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:58:50 by aomman            #+#    #+#             */
/*   Updated: 2022/11/15 18:58:52 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include"contact.hpp"
class Cphone
{
	public :
		Ccontact c[8];

		Cphone(void);
		void    add_contact(int i);
		void    search(void);
		~Cphone(void);
};
