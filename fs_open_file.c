/*
** EPITECH PROJECT, 2019
** file_systems
** File description:
** File systems
*/

#include "my_sokoban.h"

int fs_open_file(char const *filepath)
{
    int fd;
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (1);
    return (fd);
}
