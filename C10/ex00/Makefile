NAME = ft_display_file

SRCS = ./Sources/Display/ft_put_error.c ./Sources/Display/ft_putchar.c ./Sources/Fd/ft_read.c ./Sources/main.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -I Includes

%.o: ${SRCS}
	gcc ${CFLAGS} $^ -o $@

${NAME}: ${OBJS}
	gcc ${CFLAGS} ${SRCS} -o ${NAME}

all: gmk ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re