NAME	= libft.a 

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
<<<<<<< HEAD
LIB		= ar -rcs
||||||| d185b18
INCS	= libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero ft_memcpy ft_memmove 
OBJS	= ${SRCS.c=.o}
LIB0	= ar -rcs
=======
INCS	= libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero ft_memcpy ft_memmove ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c
OBJS	= ${SRCS.c=.o}
LIB0	= ar -rcs
>>>>>>> 3957526ed3e77e336e81b39e073eb82368002b9f
LIB1	= ranlib
RM		= /bin/rm -f

INCS	= libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c

OBJS	= $(SRCS:.c=.o)

all: 		$(NAME)

$(NAME):	$(OBJS) $(INCS)
			$(LIB)	$(NAME) $(OBJS)
			$(LIB1) $(NAME)

.c.o: 		
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

<<<<<<< HEAD
re:			fclean all

.PHONY:		all clean fclean re
||||||| d185b18
re:		fclean all

=======
re:		fclean all
>>>>>>> 3957526ed3e77e336e81b39e073eb82368002b9f
