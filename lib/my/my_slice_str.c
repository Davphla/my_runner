/*
** EPITECH PROJECT, 2020
** my_slice_str
** File description:
** slice str to n chara
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_slice_str(char *src, int n)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src)));
    int i;

    for (i = 0; src[i] != '\0' && i < n; i += 1)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
