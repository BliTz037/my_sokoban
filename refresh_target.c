/*
** EPITECH PROJECT, 2019
** refresh_target.c
** File description:
** refresh_target
*/

#include "my_sokoban.h"

char **refresh_target(char **buffer2d, int **pos_target, int nb_target)
{
    int r;
    int c;
    for (int i = 0; i != nb_target; i++) {
        r = pos_target[i][0];
        c = pos_target[i][1];
        if (buffer2d[r][c] == 'X' || buffer2d[r][c] == 'P') {

        } else
            buffer2d[r][c] = 'O';
    }
    return (buffer2d);
}