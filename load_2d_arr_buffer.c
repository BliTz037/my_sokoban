/*
** EPITECH PROJECT, 2019
** load_2d_arr_buffer.c
** File description:
** load_2d_arr_buffer
*/

#include "my_sokoban.h"

char **load_2d_arr_file(char *buffer, int nb_rows, int nb_cols)
{
    char **arr;
    int r = 0;
    int c = 0;

    arr = (char **) malloc(nb_rows * sizeof(char *));
    for (int i = 0; i != nb_rows; i++)
        arr[i] = (char *) malloc(nb_cols * sizeof(char));

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            r++;
            c = 0;
        } else {
            arr[r][c] = buffer[i];
            c++;
        }
    }
    return (arr);
}
