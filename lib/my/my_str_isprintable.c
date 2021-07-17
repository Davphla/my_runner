/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains printable characters and 0 if the string contains
** another type of character
*/

int my_str_isprintable(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if (32 <= str[i] && str[i] <= 126) {
        } else {
            return (0);
        }
    }
    return (1);
}
