/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my_sokoban.h"

player_t get_position_p(char **buffer2d, size_map_t map)
{
    player_t p_position;
    int r = 0;
    int c = 0;
    for (; r != map.rows; r++) {
        for (; c != map.cols; c++) {
            if (buffer2d[r][c] == 'P') {
                p_position.c = c;
                p_position.r = r;
            }
        }
        c = 0;
    }
    return (p_position);
}

void sokoban(char **buffer2d, size_map_t map, int nb_target)
{
    initscr();
    keypad(stdscr, TRUE);
    int **pos_target = get_pos_nb_target(buffer2d, nb_target, map);
    int ch;
    while (1) {
        buffer2d = refresh_target(buffer2d, pos_target, nb_target);
        check_win(buffer2d, pos_target, nb_target);
        check_lose(buffer2d, map, nb_target);
        display_map(buffer2d, map);
        ch = getch();
        check_input(&buffer2d, map, ch);
        clear();
    }
    endwin();
}

void display_map(char **buffer2d, size_map_t map)
{
    for (int r = 0; r != map.rows; r++) {
        printw("%s\n", buffer2d[r]);
    }
    refresh();
}

int main(int ac, char **av)
{
    char *buffer;
    char **buffer2d;
    size_map_t map;
    int nb_target;

    check_error(ac, av);
    if (av[1][0] == '-' && av[1][1] == 'h')
        display_desc();
    buffer = load_file_in_mem(av[1]);
    check_map(buffer);
    nb_target = get_nb_target(buffer);
    map = get_size_map(buffer);
    buffer2d = load_2d_arr_file(buffer, map.rows, map.cols);
    sokoban(buffer2d, map, nb_target);
    return (0);
}
