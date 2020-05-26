##
## EPITECH PROJECT, 2019
## makefile
## File description:
## 104
##

NAME	=	104intersection

SRC	=	src/main.c \
		src/error_handling.c \
		src/display_help.c \
		src/sphere.c \
		src/cylinder.c \
		src/cone.c \
		src/compute_des.c \
		src/compute_equa.c \
		src/compute_quad_eq.c \
		src/intersection.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3 -lm

CPPFLAGS	=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion -lm

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f *~
		rm -f src/*~
		rm -f include/*~
		rm -f *.gcda
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all clean fclean re
