/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** recursive function that returns the argument raised to the power
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
