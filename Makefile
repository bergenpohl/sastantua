NAME = Sastantua
PATH_SRC = ./src/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER) -o $(NAME)
SRC = $(PATH_SRC)main.c $(PATH_SRC)sastantua.c $(PATH_SRC)cc_putchar.c
OBJ = main.o sastantua.o cc_putchar.o

$(NAME) :
	gcc $(OPTION) $(FLAG) $(SRC)

clean :
	rm $(OBJ)
