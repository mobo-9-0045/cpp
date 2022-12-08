# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 12:05:49 by aomman            #+#    #+#              #
#    Updated: 2022/12/05 12:07:31 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

all : ${NAME}

${NAME} : 
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address main.cpp Fixed.cpp -o ${NAME}
clean :
	rm -f ${NAME}
fclean : clean

re : fclean all
