/*
** EPITECH PROJECT, 2019
** get_size_map.c
** File description:
** get_size_map
*/

#include "my_sokoban.h"

size_map_t get_size_map(char *buffer)
{
    size_map_t map = {0, 0};
    int r = 0;
    int c = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        c++;
        if (buffer[i] == '\n') {
            if (c > map.cols)
                map.cols = c;
            c = 0;
            r++;
        }
    }
    map.rows = r;
    return (map);
}