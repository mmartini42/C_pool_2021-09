# Colors
GREY = \033[4;34m
RED = \033[1;31m
GREEN = \033[3;32m
YELLOW = \033[2;49;33m
BLUE = \033[4;34m
BLUEE = \033[3;34m
PURPLE = \033[3;35m
CYAN = \033[3;36m
RESET = \033[0m
ICONOK = \033[1;32m
ICONKO = \033[1;31m
CO_DELET = \033[3;31m
CO_A_OUT = \033[96m
WHITE = \033[1;49;97m

-include Sources.mk

NAME = bsq

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -O3 -g -I Includes

%.o: %.c $(HEADER)
	@printf "\033[2K\r$(PURPLE)$<: $(CYAN)loading..$(RESET)"
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@gcc $(CFLAGS) $(OBJECTS) -o $(NAME)
	@printf "\033[2K\r$(PURPLE)$<: $(CYAN)loading..$(RESET)"

all: $(NAME)

clean:
	@$(RM) $(OBJECTS)
	@printf "${RED}Delete OBJECTS ${GREEN} [√]$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "${RED}Delete ${NAME}${GREEN} [√]$(RESET)\n"

re: fclean all

gmk:
	./Scripts/generate-mk.sh

norminette: clean
	@printf "${GREEN}"
	@norminette -R CheckForbiddenSourceHeader Sources
	@norminette -R CheckDefine Includes

end:
	./Scripts/end.sh

test: $(NAME)
	./$(NAME) map.txt
	
map:
	perl map-generator.perl 100 100 40 > map.txt

.PHONY: all clean fclean re gmk norminette test end map
