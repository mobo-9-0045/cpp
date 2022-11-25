# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 18:59:51 by aomman            #+#    #+#              #
#    Updated: 2022/11/15 18:59:53 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

all : ${NAME}

${NAME}:
	c++ -Wall -Wextra -Werror -g -fsanitize=address main.cpp Cphone.cpp Ccontact.cpp -o ${NAME}

clean:
	rm -f ${NAME}
fclean : clean

re : fclean all
