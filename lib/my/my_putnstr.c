/*
** EPITECH PROJECT, 2020
** my_putnstr
** File description:
** put n char
*/

#include "my.h"

int my_putnstr(char const *str, int n)
{
    int i = 0;

    while (str[i] != '\0' && i < n) {
        my_putchar(str[i]);
        i += 1;
    }
}
