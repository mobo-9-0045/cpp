# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 12:10:54 by aomman            #+#    #+#              #
#    Updated: 2023/01/01 12:27:20 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

all : ${NAME}

${NAME} : 
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Base.cpp A.cpp B.cpp C.cpp -o ${NAME}

clean : 
	rm -f ${NAME}

fclean : clean

re : fclean all

