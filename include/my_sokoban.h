/*
** EPITECH PROJECT, 2019
** my_sokoban.h
** File description:
** my_sokoban
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <stdlib.h>
#include <string.h> //A retirer

typedef struct size_map
{
    int rows;
    int cols;

} size_map_t;

typedef struct player
{
    int r;
    int c;
} player_t;

int fs_open_file(char const *filepath);
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_file(char *buffer, int nb_rows, int nb_cols);
size_map_t get_size_map(char *buffer);
int get_nb_target(char *buffer);
int **get_pos_nb_target(char **buffer2d, int nb_target, size_map_t map);
void sokoban(char **buffer, size_map_t map, int nb_target);
player_t get_position_p(char **buffer2d, size_map_t map);
void display_map(char **buffer2d, size_map_t map);
int check_win(char **buffer2d, int **pos_target, int nb_target);

char **move_up(char **buffer2d, size_map_t map);
char **move_down(char **buffer2d, size_map_t map);
char **move_right(char **buffer2d, size_map_t map);
char **move_left(char **buffer2d, size_map_t map);