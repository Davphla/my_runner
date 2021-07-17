/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains lowercase alphabetical and 0 if the string contains
** another type of character
*/

int my_str_islower(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if ('a' <= str[i] && str[i] <= 'z') {
        } else {
            return (0);
        }
    }
    return (1);
}
