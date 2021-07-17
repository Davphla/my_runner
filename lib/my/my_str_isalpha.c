/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains alphabetical characters and 0 if the string contains
** another type of character
*/

int my_str_isalpha(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i]
        && str[i] <= 122)) {
        } else {
            return (0);
        }
    }
    return (1);
}
