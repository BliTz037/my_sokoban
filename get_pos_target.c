/*
** EPITECH PROJECT, 2019
** get_pos_target.c
** File description:
** get_pos_target
*/

#include "my_sokoban.h"

int get_nb_target(char *buffer)
{
    int nb_target = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'O')
            nb_target++;
    }
    return (nb_target);
}

int **get_pos_nb_target(char **buffer2d, int nb_target, size_map_t map)
{
    int l = 0;
    int **pos_target = malloc(sizeof(int *) *nb_target);
    for (int i = 0; i != nb_target; i++)
        pos_target[i] = malloc(sizeof(int) * 2);

    for (int r = 0; r != map.rows; r++) {
        for (int c = 0; c != map.cols; c++) {
            if (buffer2d[r][c] == 'O') {
                pos_target[l][0] = r;
                pos_target[l][1] = c;
                l++;
            }
        }
    }
    return (pos_target);
}