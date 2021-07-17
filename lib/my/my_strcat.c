/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** function that concatenates two strings
*/

int my_strlen(char const *src);

char *my_strcat(char *dest, char const *src)
{
    int i;
    int destlen = my_strlen(dest);

    for (i = 0; src[i] != '\0'; i += 1) {
        dest[destlen] = src[i];
        destlen += 1;
    }
    dest[destlen] = '\0';
    return (dest);
}
