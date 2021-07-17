/*
** EPITECH PROJECT, 2020
** my_strswap
** File description:
** swap str
*/

void my_strswap(char **str, char **str_2)
{
    void *swap;

    swap = *str;
    *str = *str_2;
    *str_2 = swap;
}
