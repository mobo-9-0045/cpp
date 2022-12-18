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

std::string	Brain::getidea(unsigned int i) const
{
	if (i > 99)
	{
		std::cout << "idea not found " << i << "index out of range" << std::endl;
		return ("");
	}
	return (this->idea[i]);
}

void	Brain::setidea(unsigned int i, std::string str_idea)
{
	if (i > 99)
	{
		std::cout << "idea can't set " << i << "index should be less than 100" << std::endl;
		return ;
	}
	this->idea[i] = str_idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
