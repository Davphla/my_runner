/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** function that reverses a string
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int total_letter;
    int i;
    int j;
    int swap;

    total_letter = my_strlen(str) - 1;
    j = total_letter;
    for (i = 0; i <= total_letter / 2; i += 1) {
        swap = str[i];
        str[i] = str[j];
        str[j] = swap;
        j -= 1;
    }
    return (str);
}
