/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:51:14 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 11:14:20 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include<iostream>
# include<stdint.h>

class Data
{
	private : 
		std::string name;
	public : 
		Data();
		Data(const Data &d);
		Data &operator=(const Data &d);
		~Data();
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);
#endif

