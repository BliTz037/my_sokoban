/*
** EPITECH PROJECT, 2019
** description.c
** File description:
** description
*/

#include "my_sokoban.h"

void display_desc(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr(DESC_1);
    my_putstr(DESC_2);
    my_putstr("           ");
    my_putstr(DESC_3);
    my_putstr(DESC_4);
    exit(0);
}