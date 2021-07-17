/*
** EPITECH PROJECT, 2020
** my_nbrlen.c
** File description:
** get nbr length
*/

int my_nbrlen(int nb)
{
    int result = 0;

    if (nb < 0) {
        result += 1;
        nb *= -1;
    }
    for (; nb > 0; result += 1)
        nb = nb / 10;
    return (result);
}