/*
** EPITECH PROJECT, 2020
** my_add_char.c
** File description:
** add char
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_add_char(char *src, int char_added, char character)
{
    int destlen = my_strlen(src) + char_added;
    char *dest = malloc(sizeof(char) * (destlen + 1));
    int i;

    for (i = 0; i < char_added; i += 1)
        dest[i] = character;
    for (int j = 0; src[j] != '\0'; j += 1) {
        dest[i] = src[j];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
