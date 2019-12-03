/*
** EPITECH PROJECT, 2019
** input_key.c
** File description:
** input_key
*/

#include "my_sokoban.h"

char **move_up(char **buffer2d, size_map_t map)
{
    player_t p_pos;
    p_pos = get_position_p(buffer2d, map);
    if (buffer2d[p_pos.r - 1][p_pos.c] == ' '
        || buffer2d[p_pos.r - 1][p_pos.c] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r - 1][p_pos.c] = 'P';
            return (buffer2d);
    }
    if (buffer2d[p_pos.r - 1][p_pos.c] == 'X') {
        if (buffer2d[p_pos.r - 2][p_pos.c] == 'O'
        || buffer2d[p_pos.r - 2][p_pos.c] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r - 1][p_pos.c] = 'P';
            buffer2d[p_pos.r - 2][p_pos.c] = 'X';
        }
    }
    return (buffer2d);
}

char **move_down(char **buffer2d, size_map_t map)
{
    player_t p_pos;
    p_pos = get_position_p(buffer2d, map);
    if (buffer2d[p_pos.r + 1][p_pos.c] == ' '
        || buffer2d[p_pos.r + 1][p_pos.c] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r + 1][p_pos.c] = 'P';
            return (buffer2d);
    }
    if (buffer2d[p_pos.r + 1][p_pos.c] == 'X') {
        if (buffer2d[p_pos.r + 2][p_pos.c] == 'O'
        || buffer2d[p_pos.r + 2][p_pos.c] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r + 1][p_pos.c] = 'P';
            buffer2d[p_pos.r + 2][p_pos.c] = 'X';
        }
    }
    return (buffer2d);
}

char **move_right(char **buffer2d, size_map_t map)
{
    player_t p_pos;
    p_pos = get_position_p(buffer2d, map);
        if (buffer2d[p_pos.r][p_pos.c + 1] == ' '
        || buffer2d[p_pos.r][p_pos.c + 1] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c + 1] = 'P';
            return (buffer2d);
    }
    if (buffer2d[p_pos.r][p_pos.c + 1] == 'X') {
        if (buffer2d[p_pos.r][p_pos.c + 2] == 'O'
        || buffer2d[p_pos.r][p_pos.c + 2] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c + 1] = 'P';
            buffer2d[p_pos.r][p_pos.c + 2] = 'X';
        }
    }
    return (buffer2d);
}

char **move_left(char **buffer2d, size_map_t map)
{
    player_t p_pos;
    p_pos = get_position_p(buffer2d, map);
    if (buffer2d[p_pos.r][p_pos.c - 1] == ' '
        || buffer2d[p_pos.r][p_pos.c - 1] == 'O') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c - 1] = 'P';
            return (buffer2d);
    }
    if (buffer2d[p_pos.r][p_pos.c - 1] == 'X') {
        if (buffer2d[p_pos.r][p_pos.c - 2] == 'O'
        || buffer2d[p_pos.r][p_pos.c - 2] == ' ') {
            buffer2d[p_pos.r][p_pos.c] = ' ';
            buffer2d[p_pos.r][p_pos.c - 1] = 'P';
            buffer2d[p_pos.r][p_pos.c - 2] = 'X';
        }
    }
    return (buffer2d);
}