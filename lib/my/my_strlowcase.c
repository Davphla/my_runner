/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** function that puts every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if (65 <= str[i] && str[i] <= 90) {
            str[i] += 32;
        }
        else {
            str[i] = str[i];
        }
    }
    return (str);
}
