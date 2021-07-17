/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** function that concatenates n char in two strings
*/

int my_strlen(char const *src);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int destlen = my_strlen(dest);

    for (i = 0; src[i] != '\0' && i < nb; i += 1) {
        dest[destlen] = src[i];
        destlen += 1;
    }
    return (dest);
}
