/*
** EPITECH PROJECT, 2020
** my_putnchar.c
** File description:
** put n char
*/

#include <unistd.h>

void my_putnchar(char c, int n)
{
    for (int i = 0; i < n; i += 1)
        write(1, &c , 1);
}