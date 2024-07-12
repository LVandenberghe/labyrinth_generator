##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile my_runner
##

ECHO = /bin/echo -e
DEFAULT = "\033[00m"
BOLD = "\e[1m"
RED = "\e[31m"
GREEN = "\e[32m"
LIGHT_BLUE = "\e[94m"
WHITE = "\e[1;37m"

SRC	=	lib/my_put_nbr.c \
		lib/my_putchar.c \
		lib/my_putstr.c \
		lib/mini_printf.c	\
		lib/my_str_to_word_array.c \
		lib/my_strcpy.c	\
		lib/my_strcpy_m.c	\
		lib/my_strdup.c	\
		lib/my_strlen.c \
		lib/my_strcmp.c	\
		lib/my_strcat.c	\
		lib/my_getnbr.c	\
		lib_list/list_add.c	\
		lib_list/list_create.c	\
		lib_list/list_get.c	\
		lib_list/list_remove.c	\
		src/check_function.c	\
		src/fill_struct.c	\
		src/generator.c	\
		src/kurskal.c	\
		src/perfect_maze.c	\
		src/random_value.c	\
		src/replacement_function.c	\
		src/transform_labyrinth.c	\
		src/unperfect.c	\
		src/special_case.c	\
		src/print_labyrinth.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFLAGS	=	-Wall -Wextra  -I includes/
all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

debug:	CFLAGS += -g
debug:	re

re:	fclean all

tests_run:
		gcc -o unit_test $(SRC) -L . -lmy -lcriterion --coverage
		./unit_test

%.o:	%.c
	@$(CC) -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)" [OK] " \
	$(WHITE) || $(ECHO) -n $(BOLD) $(RED)" [KO] "$(WHITE) && $(ECHO) \
	$(BOLD) $< | rev | cut -d/ -f 1 | rev && $(ECHO) -n $(DEFAULT)
