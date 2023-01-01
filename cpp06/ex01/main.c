/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:22:52 by aomman            #+#    #+#             */
/*   Updated: 2023/01/01 11:12:38 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"serialize.hpp"

int main(void)
{
	Data *data = new Data();

	std::cout << data << std::endl;
	uintptr_t ptr = serialize(data);
	Data *dataptr = deserialize(ptr);
	std::cout << dataptr << std::endl;
	return (0);
}
