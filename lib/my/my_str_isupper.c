/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains uppercase alphabetical characters and 0 if the string
** contains another type of character
*/

int my_str_isupper(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if ('A' <= str[i] && str[i] <= 'Z') {
        } else {
            return (0);
        }
    }
    return (1);
}
