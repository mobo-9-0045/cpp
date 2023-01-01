/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:28:06 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 11:14:50 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"serialize.hpp"

Data::Data()
{
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const Data &d)
{
	if (this != &d)
		*this = d;
	std::cout << "Data copy constructor called" << std::endl;
}

Data &Data::operator = (const Data &d)
{
	this->name = d.name;
	std::cout << "Data copy assignement operator called" << std::endl;
	return (*this);
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
