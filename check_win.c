/*
** EPITECH PROJECT, 2019
** check_win.c
** File description:
** check_win
*/

#include "my_sokoban.h"

int check_win(char **buffer2d, int **pos_target, int nb_target)
{
    int r;
    int c;
    int nb_pts = 0;
    for (int i = 0; i != nb_target; i++) {
        r = pos_target[i][0];
        c = pos_target[i][1];
        if (buffer2d[r][c] == 'X')
            nb_pts++;
    }
    if (nb_pts == nb_target) {
        endwin();
        exit(0);
    }
    else
        return (0);
}