/*
** EPITECH PROJECT, 2020
** my_alloc_cat
** File description:
** allocate and cat two strings
*/
#include <stdlib.h>
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_alloc_cat(char *str, char *str_added)
{
    char *dest = malloc((my_strlen(str) + my_strlen(str_added) + 1));

    my_strcpy(dest, str);
    my_strcpy(dest + my_strlen(str), str_added);
    return (dest);
}