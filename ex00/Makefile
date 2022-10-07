# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:54:51 by mlarra            #+#    #+#              #
#    Updated: 2022/10/07 14:52:50 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRCS	=	main.cpp	Zombie.cpp	newZombie.cpp	randomChump.cpp

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