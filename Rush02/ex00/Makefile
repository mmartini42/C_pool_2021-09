-include Sources.mk

NAME = rush-02

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra -I Includes

${NAME}: ${OBJS}
	gcc ${CFLAGS} $^ -o $@

all: gmk ${NAME}

gmk:
	echo "SRCS += " > Sources.mk
	find . -name "*.c" | sed -e 's#^#'"SRCS += "' #' > Sources.mk

debug:
	@gcc -g3 -I Includes ${SRCS} -o $@
	rm -rf ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}
	rm -rf debug

re: fclean all

.PHONY: gmk all clean fclean re