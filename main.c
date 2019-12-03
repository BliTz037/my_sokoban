/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "include/my_sokoban.h"

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

void sokoban(char **buffer2d, size_map_t map)
{
    initscr();
    keypad(stdscr, TRUE);
    int ch;
    while (1) {
        display_map(buffer2d, map);
        ch = getch();
        if (ch == KEY_UP)
            buffer2d = move_up(buffer2d, map);
        if (ch == KEY_RIGHT)
            buffer2d = move_right(buffer2d, map);
        if (ch == KEY_LEFT)
            buffer2d = move_left(buffer2d, map);
        if (ch == KEY_DOWN)
            buffer2d = move_down(buffer2d, map);
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
    if (ac != 2)
        return (84);
    buffer = load_file_in_mem(av[1]);
    map = get_size_map(buffer);
    buffer2d = load_2d_arr_file(buffer, map.rows, map.cols);
    sokoban(buffer2d, map);
    return (0);
}
