NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra -I includes -c

%.o: %.c
	gcc ${CFLAGS} $^ -o $@

${NAME}: ${OBJS}
	ar rcs $@ $^

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: re all clean fclean