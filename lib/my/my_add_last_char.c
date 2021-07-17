/*
** EPITECH PROJECT, 2020
** my_add_last_char
** File description:
** add last char
*/

#include <stdlib.h>
#include "my.h"

int my_strlen(char const *str);

char *my_add_last_char(char *src, int char_added, char character)
{
    int destlen = my_strlen(src) + char_added;
    char *dest = malloc(sizeof(char) * (destlen + 1));
    int i;

    if (character == 0)
        return (src);
    my_strcpy(dest, src);
    for (i = destlen - char_added; i < destlen; i += 1)
        dest[i] = character;
    dest[i] = '\0';
    src = dest;
    return (dest);
}
