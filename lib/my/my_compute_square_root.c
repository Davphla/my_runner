/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** function that returns the square root of the number given as argument
*/

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb)
{
    int square_root = 1;
    int i;

    for (i = 2; nb >= square_root; i += 1) {
        square_root = my_compute_power_rec(i, 2);
    }
    square_root = my_compute_power_rec((i - 2), 2);
    i = i - 2;
    if (square_root == nb) {
        return (i);
    } else {
        return (0);
    }
}
