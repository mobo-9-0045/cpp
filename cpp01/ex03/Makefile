# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:12:19 by aomman            #+#    #+#              #
#    Updated: 2022/11/25 14:12:20 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = voilence

all : ${NAME}

${NAME}:
	c++  -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address main.cpp Weapon.cpp HumanA.cpp HumanB.cpp HumanB.hpp -o ${NAME}

clean:
	rm -f ${NAME}
fclean : clean

re : fclean all
