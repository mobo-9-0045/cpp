# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yourLogin <yourLogin@student.1337.ma>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:33:45 by yourLogin         #+#    #+#              #
#    Updated: 2022/12/13 16:33:51 by yourLogin        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animale

all : ${NAME}

${NAME} : 
	c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address -Wshadow -Wno-shadow main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp AAnimal.cpp -o ${NAME}
clean :
	rm -f ${NAME}

fclean : clean

re : fclean all
