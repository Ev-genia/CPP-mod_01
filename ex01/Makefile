# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:54:51 by mlarra            #+#    #+#              #
#    Updated: 2022/10/07 16:12:49 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombies

SRCS	=	main.cpp	Zombie.cpp	zombieHorde.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	Zombie.hpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

.PHONY	:	all clean fclean re

${NAME}	:	${OBJS} ${HEADER}
			${CC} ${CFLAFS} ${SRCS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all