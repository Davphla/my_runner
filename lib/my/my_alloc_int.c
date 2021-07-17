/*
** EPITECH PROJECT, 2020
** my_alloc_int.c
** File description:
** alloc int
*/

#include <stdlib.h>

int *my_alloc_int(int length, int int_wanted)
{
    int *dest = malloc(sizeof(int) * (length));

    for (int i = 0; i < length; i += 1)
        dest[i] = int_wanted;
    return (dest);
}
