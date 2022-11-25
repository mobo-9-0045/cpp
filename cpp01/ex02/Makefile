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

NAME = brain

all : ${NAME}

${NAME}:
	c++ -Wall -Wextra -Werror -g -fsanitize=address main.cpp -o ${NAME}

clean:
	rm -f ${NAME}
fclean : clean

re : fclean all