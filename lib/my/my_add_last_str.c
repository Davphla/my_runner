/*
** EPITECH PROJECT, 2020
** my_add_last_str.c
** File description:
** add a string at the last spot in a matrice. End is defined by a 0.
*/

#include <stdlib.h>
#include "my.h"

char **my_add_last_str(char **src, char *str)
{
    char **dest = malloc(sizeof(char *) * (my_matrice_length(src) + 2));
    int i;

    for (i = 0; src[i] != 0; i += 1) {
        dest[i] = malloc(sizeof(char) * (my_strlen(src[i]) + 1));
        my_strcpy(dest[i], src[i]);
    }
    dest[i] = malloc(sizeof(char) * (my_strlen(str) + 1));
    my_strcpy(dest[i], str);
    dest[i + 1] = malloc(sizeof(char) * 2);
    dest[i + 1] = 0;
    for (int j = 0; j < my_matrice_length(src); j += 1)
        free(src[j]);
    free(src);
    return (dest);
}