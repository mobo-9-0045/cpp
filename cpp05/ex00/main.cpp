/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:26:20 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/19 13:26:22 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat b1("MoBo", 150);
        b1.increment(149);
        b1.decrement(149);
        std::cout << b1;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " <<e.what() << std::endl;
    }
    return (0);
}
