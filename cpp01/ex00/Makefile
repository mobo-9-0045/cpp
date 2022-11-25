# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:29:23 by aomman            #+#    #+#              #
#    Updated: 2022/11/22 15:29:25 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

all : ${NAME}

${NAME}:
	c++ -Wall -Wextra -Werror -g -fsanitize=address randomChump.cpp newZombie.cpp main.cpp Zombie.cpp -o ${NAME}

clean:
	rm -f ${NAME}
fclean : clean

re : fclean all