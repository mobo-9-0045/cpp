/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:34:52 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/17 13:34:53 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &b)
{
	if (this != &b)
		*this = b;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator = (const Brain &b)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		this->idea[i] = b.idea[i];
		i++;
	}
	std::cout << "Brain copy assignement overload called" << std::endl;
	return (*this);
}

std::string	*Brain::getidea(void) const
{
	return (this->idea);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
