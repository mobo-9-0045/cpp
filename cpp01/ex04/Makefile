# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 14:10:59 by aomman            #+#    #+#              #
#    Updated: 2022/11/29 14:14:45 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

all : ${NAME}

${NAME} :
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address main.cpp -o ${NAME}
clean:
	rm -f ${NAME}
fclean : clean

re : fclean all
