/*
** EPITECH PROJECT, 2019
** check_error
** File description:
** check_error
*/

#include "my_sokoban.h"

void check_error(int ac, char **av)
{
    int fd = 0;

    if (ac != 2)
        exit(84);
    fd = fs_open_file(av[1]);
    if (fd == 1)
        exit(84);
}

void check_map(char *buffer)
{
    int nb_p = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '#'
            || buffer[i] == 'X' || buffer[i] == 'O' || buffer[i] == 'P') {
                if (buffer[i] == 'P')
                    nb_p++;
        } else
            exit(84);
    }
    if (nb_p != 1 )
        exit(84);
}