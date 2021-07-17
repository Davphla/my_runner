/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** allocates memory and copies the string given as argument in it
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest;
    int i;
    int destlen = my_strlen(src);

    dest = malloc(destlen * sizeof(char));
    for (i = 0; src[i] != '\0'; i += 1) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
