# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 14:06:32 by yourLogin         #+#    #+#              #
#    Updated: 2022/12/13 14:06:34 by yourLogin        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./frag

all : ${NAME}

${NAME} : 
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address main.cpp ClapTrap.cpp FragTrap.cpp -o ${NAME}

clean : 
	rm -f ${NAME}

fclean : clean

re : fclean all
