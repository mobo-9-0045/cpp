# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 14:07:17 by aomman            #+#    #+#              #
#    Updated: 2022/12/05 12:09:38 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

all : ${NAME}

${NAME} :
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address Fixed.cpp main.cpp -o ${NAME}

clean :
	rm -f ${NAME}

fclean : clean

re : clean all
