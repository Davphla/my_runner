/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains digits and 0 otherwise
*/

int my_str_isnum(char const *str)
{
    int pos = 0;

    for (; ('0' <= str[pos] && str[pos] <= '9') \
    || str[pos] == '-' || str[pos] == '+'; pos += 1);
    if (str[pos] != '\0')
        return (0);
    return (1);
}
