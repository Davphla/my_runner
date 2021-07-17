/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** function that returns 1 if the number is prime and 0 if not
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb == 0 || nb == 1 || nb < 0) {
        return (0);
    }
    while (nb % i != 0) {
        i += 1;
    }
    if (i == nb) {
        return (1);
    } else {
        return (0);
    }
}
