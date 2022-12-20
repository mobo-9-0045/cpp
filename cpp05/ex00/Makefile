# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 19:44:51 by yourLogin         #+#    #+#              #
#    Updated: 2022/12/19 19:44:53 by yourLogin        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

all : ${NAME}

${NAME} : 
	c++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address main.cpp bureaucrat.cpp -o ${NAME}
clean : 
	rm -f ${NAME}
fclean : clean

re : fclean all
