# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 12:17:38 by yourLogin         #+#    #+#              #
#    Updated: 2022/12/09 12:17:40 by yourLogin        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

all : ${NAME}

${NAME} : 
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address main.cpp ClapTrap.cpp -o ${NAME}

clean : 
	rm -f ${NAME}
fclean : clean

re : fclean all
