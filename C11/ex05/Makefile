NAME = do-op

SRCS = ./Sources/ft_op.c ./Sources/ft_putnbr.c ./Sources/ft_putstr.c ./Sources/main.c
OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra -I Includes

${NAME}: ${OBJS}
	gcc ${CFLAGS} ${SRCS} -o $@

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re