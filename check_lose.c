/*
** EPITECH PROJECT, 2019
** check_lose.c
** File description:
** check_lose
*/

#include "my_sokoban.h"

void check_lose(char **buffer, size_map_t map, int nb_target)
{
    int box_stuck = 0;

    for (int r = 0; r != map.rows ; r++) {
        for (int c = 0; c != map.cols; c++) {
            if (buffer[r][c] == 'X') {
                if ((buffer[r][c + 1] == '#' && buffer[r - 1][c] == '#')
                || (buffer[r][c - 1] == '#' && buffer[r - 1][c] == '#')) {
                    box_stuck++;
                }
                else if ((buffer[r][c + 1] == '#' && buffer[r + 1][c] == '#')
                || (buffer[r][c - 1] == '#' && buffer[r + 1][c] == '#'))
                    box_stuck++;
            }
        }
    }
    if (box_stuck == nb_target) {
        endwin();
        exit(1);
    }
}