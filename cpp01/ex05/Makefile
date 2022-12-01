# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 18:36:39 by aomman            #+#    #+#              #
#    Updated: 2022/11/30 18:37:22 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

all : ${NAME}

${NAME} :
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address main.cpp harl.cpp -o ${NAME}
clean:
	rm -f ${NAME}
fclean : clean

re : fclean all
