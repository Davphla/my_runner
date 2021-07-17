/*
** EPITECH PROJECT, 2020
** my_convertbase.c
** File description:
** convert decimal to another base
*/

#include <stdlib.h>
#include "my.h"

char *my_convertbase(unsigned int nbr, char const *base)
{
    char *str = my_alloc_char(1, '\0');
    int base_2 = my_strlen(base);

    for (; nbr >= 1;) {
        str = my_add_last_char(str, 1, base[nbr - ((nbr / base_2) * base_2)]);
        nbr = nbr / base_2;
    }
    my_revstr(str);
    return (str);
}