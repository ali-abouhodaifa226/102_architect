##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##
NAME	=	102architect

SRC	=	src/main.c 					\
		src/display_help.c 			\
		src/create_matrix.c 		\
		src/error_handling.c		\
		src/architect.c				\

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3 -lm

CPPFLAGS	=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f *~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all TU clean fclean re