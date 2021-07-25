# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 18:52:31 by cado-car          #+#    #+#              #
#    Updated: 2021/07/24 18:52:31 by cado-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a 

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INCS	= libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strlen.c ft_memset.c 
OBJS	= ${SRCS.c=.o}
LIB0	= ar -rcs
LIB1	= ranlib
RM		= /bin/rm -f

.c.o: 	${CC} ${CFLAGS} -c $< -I ${INCS} -o ${<:.c=.o}

all: 	${NAME}

${NAME}:	${OBJS}
			${LIB0}	${NAME} ${OBJS}
			${LIB1} ${NAME}

clean:	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

