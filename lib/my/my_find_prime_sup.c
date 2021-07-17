/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** a function that returns the smallest prime number that is
** greater than, or equal to, the number given as a parameter
*/

int my_find_prime_sup(int nb)
{
    int i = 2;
    int prime = 0;

    if (nb == 0 || nb == 1 || nb < 0) {
        return (2);
    }
    while (prime == 0) {
        while (nb % i != 0) {
            i += 1;
        }
        if (i == nb) {
            prime = 1;
        } else {
            nb += 1;
        }
        i = 2;
    }
    return (nb);
}
