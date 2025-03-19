##
## EPITECH PROJECT, 2024
## makefile
## File description:
## compile myftp project
##

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	strace

CC	=	gcc

CFLAGS	=	-Wall -Wextra -g

BOLD	=	\033[1m
GREEN	=	\033[1;92m
NC	=	\033[0m

all:	$(NAME)

$(NAME):
	@$(CC) $(SRC) -o $(NAME) $(CFLAGS)

clean:
	@echo -e "$(BOLD)$(GREEN)[Cleaning ...]$(NC) : \
		Object and other useless files are removed."
	@rm -f src/*.o
	@rm -f src/*~
	@rm -f include/*.o
	@rm -f include/*~

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
.PHONY:	re all clean
