NAME	= libft
SRC		= ft_split.c utils1.c utils2.c
INC		= libft.h
OBJ	= $(SRC:.c=.o)
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror
%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
all:			$(NAME)
$(NAME):		$(OBJ)
					ar -rcs $(NAME).a $(OBJ)
clean:
				$(RM) $(OBJ)
fclean:			clean
					$(RM) $(NAME).a
re:				fclean all