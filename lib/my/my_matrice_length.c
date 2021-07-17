/*
** EPITECH PROJECT, 2020
** my_matrice_len.c
** File description:
** get matrice len
*/
#include <stddef.h>

int my_matrice_length(char **str)
{
    int i;

    for (i = 0; str[i] != 0; i += 1);
    return (i);
}
