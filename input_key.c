/*
** EPITECH PROJECT, 2019
** input_key.c
** File description:
** input_key
*/

#include "my_sokoban.h"

void check_input(char ***buffer2d, size_map_t map, int ch)
{
    if (ch == KEY_UP)
        move_up(*buffer2d, map);
    if (ch == KEY_RIGHT)
        move_right(*buffer2d, map);
    if (ch == KEY_LEFT)
        move_left(*buffer2d, map);
    if (ch == KEY_DOWN)
        move_down(*buffer2d, map);
}

void move_up(char **buffer2d, size_map_t map)
{
    player_t p_pos;

    p_pos = get_position_p(buffer2d, map);
    if (buffer2d[p_pos.r - 1][p_pos.c] == ' '
        || buffer2d[p_pos.r - 1][p_pos.c] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r - 1][p_pos.c] = 'P';
    }
    if (buffer2d[p_pos.r - 1][p_pos.c] == 'X') {
        if (buffer2d[p_pos.r - 2][p_pos.c] == 'O'
        || buffer2d[p_pos.r - 2][p_pos.c] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r - 1][p_pos.c] = 'P';
            buffer2d[p_pos.r - 2][p_pos.c] = 'X';
        }
    }
}

void move_down(char **buffer2d, size_map_t map)
{
    player_t p_pos;

    p_pos = get_position_p(buffer2d, map);
    if (buffer2d[p_pos.r + 1][p_pos.c] == ' '
        || buffer2d[p_pos.r + 1][p_pos.c] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r + 1][p_pos.c] = 'P';
    }
    if (buffer2d[p_pos.r + 1][p_pos.c] == 'X') {
        if (buffer2d[p_pos.r + 2][p_pos.c] == 'O'
        || buffer2d[p_pos.r + 2][p_pos.c] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r + 1][p_pos.c] = 'P';
            buffer2d[p_pos.r + 2][p_pos.c] = 'X';
        }
    }
}

void move_right(char **buffer2d, size_map_t map)
{
    player_t p_pos;

    p_pos = get_position_p(buffer2d, map);
        if (buffer2d[p_pos.r][p_pos.c + 1] == ' '
        || buffer2d[p_pos.r][p_pos.c + 1] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c + 1] = 'P';
    }
    if (buffer2d[p_pos.r][p_pos.c + 1] == 'X') {
        if (buffer2d[p_pos.r][p_pos.c + 2] == 'O'
        || buffer2d[p_pos.r][p_pos.c + 2] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c + 1] = 'P';
            buffer2d[p_pos.r][p_pos.c + 2] = 'X';
        }
    }
}

void move_left(char **buffer2d, size_map_t map)
{
    player_t p_pos;

    p_pos = get_position_p(buffer2d, map);
    if (buffer2d[p_pos.r][p_pos.c - 1] == ' '
        || buffer2d[p_pos.r][p_pos.c - 1] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c - 1] = 'P';
    }
    if (buffer2d[p_pos.r][p_pos.c - 1] == 'X') {
        if (buffer2d[p_pos.r][p_pos.c - 2] == 'O'
        || buffer2d[p_pos.r][p_pos.c - 2] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c - 1] = 'P';
            buffer2d[p_pos.r][p_pos.c - 2] = 'X';
        }
    }
}