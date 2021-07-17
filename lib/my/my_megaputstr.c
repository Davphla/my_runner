/*
** EPITECH PROJECT, 2020
** my_megaputstr
** File description:
** put str with \ on non printable chara
*/

#include "my.h"

void my_megaputchar(char chara)
{
    if (32 <= chara && chara <= 126)
        my_putchar(chara);
    else {
        chara = my_getnbr(my_convertbase(chara, "01234567"));
        my_putchar(92);
        for (int i = 100; i > chara; i /= 10, my_putchar('0'));
        my_putnbr(chara);
    }
}

void my_megaputstr(char *str, int n)
{
    for (int i = 0; str[i] != '\0' && i < n; i += 1)
        my_megaputchar(str[i]);
}