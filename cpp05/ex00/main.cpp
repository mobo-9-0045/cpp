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
        Bureaucrat *b1 = new Bureaucrat("MoBo", 1);
        b1->setGrade(151);
        std::cout << b1->getGrade() << std::endl;
        // delete b1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
