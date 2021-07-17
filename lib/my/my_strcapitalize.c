/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** function that puts every letter of every word in it in uppercase
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    for (i = 0; str[i] != '\0'; i += 1) {
        if (('a' > str[i - 1] || str[i - 1] > 'z') &&
        ((str[i - 1] > '9') || (str[i - 1] < '0')) &&
        ('a' <= str[i] && str[i] < 'z')) {
            str[i] -= 32;
            i += 1;
        }
    }
    return (str);
}
