/*
** EPITECH PROJECT, 2020
** my_putstr_error.c
** File description:
** function that displays, one-by-one, the characters of a string.
** The address of the string’s first character will be found in
** the pointer passed as a parameter to the function
*/

void my_putchar_error(char c);

int my_putstr_error(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar_error(str[i]);
        i += 1;
    }
}
