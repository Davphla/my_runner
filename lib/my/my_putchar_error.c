/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** write a letter
*/
#include <unistd.h>

void my_putchar_error(char c)
{
    write(2, &c , 1);
}
