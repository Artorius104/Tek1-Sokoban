##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_sokoban
##

SRC_MAIN	=	src/main.c	\

SRC		=	src/readme.c	\
			src/check_input.c	\
			src/check_map.c	\
			src/tab_management.c	\
			src/get_map.c	\
			src/find_player.c	\
			src/my_center_map.c	\
			src/manage_player.c	\
			src/sokoban.c	\
			src/replace_spot.c	\
			src/player_movement.c	\
			src/win_or_lose.c	\
			lib/my/my_strcmp.c	\
			lib/my/my_strlen.c	\
			##addprefix

SRC_TESTS	=	tests/test_input.c	\

OBJ	=	$(SRC:.c=.o) $(SRC_MAIN:.c=.o)

LIB	= -L./lib -lmy

CFLAGS 	+= -lncurses

CRITERION_FLAGS	=	--coverage -lcriterion

CPPFLAGS = -I./include

CC = gcc

NAME	=	my_sokoban

TEST_NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my
		$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LIB)
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		make fclean -C lib/my
		rm -f $(NAME)
		rm -f $(TEST_NAME)
		rm -f *.gcda
		rm -f *.gcno

re:		fclean all

debug:
		CFLAGS += -W -Wall -Wextra -g
		$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LIB)

tests_run:
		rm -f *.gcda
		rm -f *.gcno
		$(CC) -o $(TEST_NAME) $(CFLAGS) $(CPPFLAGS) $(SRC) tests/*.c $(CRITERION_FLAGS)
		./unit_tests

.PHONY: clean fclean re all tests_run