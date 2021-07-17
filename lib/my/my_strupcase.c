/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** function that puts every letter of every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if (97 <= str[i] && str[i] <= 122) {
            str[i] -= 32;
        }
        else {
            str[i] = str[i];
        }
    }
    return (str);
}
