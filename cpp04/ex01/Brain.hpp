/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:34:42 by yourLogin         #+#    #+#             */
/*   Updated: 2022/12/17 13:34:43 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private : 
		std::string *idea;
	public : 
		Brain();
		Brain(Brain &b);
		Brain &operator = (const Brain &b);
		std::string getidea(unsigned int i) const;
		void		setidea(unsigned int i, std::string str_idea);
		~Brain();
};

#endif
