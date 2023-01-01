# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 10:55:03 by aomman            #+#    #+#              #
#    Updated: 2022/12/30 10:56:35 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

all : ${NAME}

${NAME} : 
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp serialize.cpp -o ${NAME}
clean : 
	rm -r ${NAME}
fclean : clean

re : fclean all
