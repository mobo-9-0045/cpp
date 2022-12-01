/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:38:03 by aomman            #+#    #+#             */
/*   Updated: 2022/11/30 18:38:04 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include<iostream>

class harl
{
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		void complain(std::string level);
		harl();
		~harl();
};

#endif
