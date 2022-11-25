/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:58:59 by aomman            #+#    #+#             */
/*   Updated: 2022/11/15 18:59:01 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Ccontact
{
	public :
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		Ccontact(void);
		~Ccontact(void);
};
