/*
** EPITECH PROJECT, 2020
** my_strnbr_cmp.c
** File description:
** compar a char to a str
*/

int my_strnbr_cmp(char chara, char *str)
{
    int i;

    for (i = 0; str[i] != chara && str[i] != '\0'; i += 1);
    if (str[i] == chara)
        return (1);
    else
        return (0);
}
