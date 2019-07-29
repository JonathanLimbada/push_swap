LIB = libft
NAME_CH = checker
NAME_PS = push_swap
CC = gcc
SRC_DIR = ./
FLAGS = -Wall -Werror -Wextra -g
INCLUDES = ./includes/
OPTIONS = -I. -I./libft -lft -L./libft
SRC_COMMON += $(SRC_DIR)stackstuff.c
SRC_COMMON += $(SRC_DIR)baesick.c $(SRC_DIR)baysick.c
SRC_COMMON += $(SRC_DIR)splits.c
SRC_CH = $(SRC_DIR)checker.c $(SRC_COMMON)
SRC_PS = $(SRC_DIR)push_swap.c $(SRC_COMMON)


all: $(LIB) $(NAME_CH) $(NAME_PS)

$(LIB): relib cleanlib
	@echo "$(LIB) compiled"

$(NAME_CH):
	@echo "$(NAME_CH) compiled"
	@$(CC) $(FLAGS) $(OPTIONS) $(SRC_CH) -o $(NAME_CH)

$(NAME_PS):
	@echo "$(NAME_PS) notready"
#	@$(CC) $(FLAGS) $(OPTIONS) $(SRC_PS) -o $(NAME_PS)

clean:
	@echo "clean TODO"

fclean: clean
	@echo "$(NAME_CH) & $(NAME_PS) removed"
	@/bin/rm -f $(NAME_CH) $(NAME_PS)

re: fclean all

relib:
	@$(MAKE) -C ./libft re

cleanlib:
	@$(MAKE) -C ./libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./libft fclean

