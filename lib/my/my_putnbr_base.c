/*
** EPITECH PROJECT, 2020
** my_putnbr_base.c
** File description:
** put in a specific base
*/
#include "my.h"

void my_putnbr_base(unsigned int nbr, char const *base)
{
    int position;
    int base_2 = my_strlen(base);
    char *str = my_alloc_char(100, '\0');

    for (position = 0; nbr >= 1; position += 1) {
        if (nbr % base_2 != 0)
            str[position] = nbr - ((nbr / base_2) * base_2);
        nbr = nbr / base_2;
    }
    for (position -= 1; position >= 0; position -= 1)
        my_putchar(base[str[position]]);
}