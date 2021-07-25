NAME	= libft.a 

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INCS	= libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero ft_memcpy ft_memmove ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c
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
