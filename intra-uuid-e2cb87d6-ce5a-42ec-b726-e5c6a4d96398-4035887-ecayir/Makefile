CFLAGS	= gcc -Wall -Wextra -Werror -o
NAME	= push_swap

SRC		= src/main.c src/utils1.c src/utils2.c src/utils3.c src/selection.c 'src/sort|short.c' 'src/stk|s.c' 'src/stk|p.c' 'src/stk|r.c' 'src/stk|rr.c' src/utils4.c 'src/sort|bigger.c' 

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

all: credit $(NAME)
	@echo "$(BLUE)██████████████████████ Compiling is DONE ███████████████████████$(RESET)"
	@echo "    \033[0;95mMade with love by : \033[1;33mecayir\033[m"
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRC) -L libft/ -lft

clean:
	@$(MAKE) -C libft/ clean

fclean: fclean
	rm -f $(NAME)
	@$(MAKE) -C libft/ fclean

re: fclean all

credit:
	@echo "░▒█▀▀█░▒█░▒█░▒█▀▀▀█░▒█░▒█░░░▒█▀▀▀█░▒█░░▒█░█▀▀▄░▒█▀▀█"
	@echo "░▒█▄▄█░▒█░▒█░░▀▀▀▄▄░▒█▀▀█░░░░▀▀▀▄▄░▒█▒█▒█▒█▄▄█░▒█▄▄█"
	@echo "░▒█░░░░░▀▄▄▀░▒█▄▄▄█░▒█░▒█░░░▒█▄▄▄█░▒▀▄▀▄▀▒█░▒█░▒█░░░"
	@echo "     \033[0;96mMade with love by : \033[0;96mecayir\033[m"