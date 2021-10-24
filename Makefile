# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 14:30:28 by sdi-lega          #+#    #+#              #
#    Updated: 2021/10/14 05:43:49 by sdi-lega         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS 	= ${wildcard *.c}

OBJS 	= ${SRCS:.c=.o}

CC		= gcc

FLAGS	= -I.

RM		= rm -f

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}
bonus:		${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

list:
			ar -t ${NAME}
			
.PHONY:		all clean fclean re