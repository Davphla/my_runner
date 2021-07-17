/*
** EPITECH PROJECT, 2020
** mr_strlen.c
** File description:
** function that counts and returns the number of characters found in
** the string
** passed as parameter.
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
