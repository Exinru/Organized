##
## EPITECH PROJECT, 2023
## EPITECH PROJECT BS MY_LS
## File description:
## makefile of bs_my_ls
##

CFLAGS	= -Wall -Werror -Wextra

SRC =	$(wildcard src/*.c)

OBJ =	$(SRC:.c=.o)

EXECUTABLE = organized

all: $(EXECUTABLE)

$(EXECUTABLE):	$(OBJ)
	gcc $(CFLAGS) $(SRC) libshell/libshell.a -o $(EXECUTABLE)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXECUTABLE)
re: fclean all
