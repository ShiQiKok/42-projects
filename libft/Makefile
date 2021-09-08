SRCS = ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c

OBJS = ${SRCS:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
LIB = libft.a

%.o : %.c
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${LIB}: ${OBJS}
	ar rc ${LIB} ${OBJS}

all: ${LIB}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re
