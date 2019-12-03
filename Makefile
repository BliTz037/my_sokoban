##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile Sokoban
##

INC =	-I /include/my_sokoban.h

SRC	=	main.c \
		fs_open_file.c \
		load_file_in_mem.c \
		load_2d_arr_buffer.c \
		input_key.c \
		get_size_map.c

NAME	=	my_sokoban

all:
	$(CC) -Wall -Wextra -o $(NAME) $(SRC) -lncurses $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all