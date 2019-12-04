/*
** EPITECH PROJECT, 2019
** load_file_in_mem.c
** File description:
** load_file_in_mem.c
*/

#include "my_sokoban.h"

char *load_file_in_mem(char const *filepath)
{
    int fd = fs_open_file(filepath);
    char *buffer;
    struct stat sb;

    stat(filepath, &sb);
    buffer = malloc(sb.st_size +1);
    buffer[sb.st_size ] = '\0';
    read(fd, buffer, sb.st_size);
    close(fd);
    return (buffer);
}
