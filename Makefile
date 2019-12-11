##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile Sokoban
##

CPPFLAGS =	-I./include/

SRC	=	main.c \
		description.c \
		my_putchar.c \
		my_putstr.c \
		fs_open_file.c \
		load_file_in_mem.c \
		load_2d_arr_buffer.c \
		input_key.c \
		get_size_map.c \
		get_pos_target.c \
		refresh_target.c \
		check_win.c \
		check_lose.c \
		check_error.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(OBJ)
	gcc -Wall -Wextra -o $(NAME) $(OBJ)  $(CPPFLAGS) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
