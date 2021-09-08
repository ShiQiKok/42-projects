SRCS = ft_strlen.c
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