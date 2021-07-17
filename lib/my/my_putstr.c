/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** function that displays, one-by-one, the characters of a string.
** The address of the string’s first character will be found in
** the pointer passed as a parameter to the function
*/

#include <unistd.h>
int my_strlen(char const *str);
void my_putchar(char c);

int my_putstr(char const *str)
{
    write(1, (str), my_strlen(str));
    return (0);
}
