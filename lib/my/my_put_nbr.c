/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** print int variable
*/

void my_putchar(char c);

int my_putstr(char const *str);

int my_compute_power_rec(int nb, int p);

int my_putnegative_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    return (nb);
}

int my_putnbr(int nb)
{
    int i;
    int big_int = -1;

    nb = my_putnegative_nbr(nb);
    if (nb == -2147483648)
        return (my_putstr("2147483648"));
    if (nb > 1000000000 || nb < -1000000000) {
        big_int = (nb % 10) + 48;
        nb /= 10;
    }
    if (nb == 0)
        my_putchar(48);
    for (i = 0; nb / my_compute_power_rec(10, i) != 0; i += 1);
    for (; i > 0; i -= 1) {
        my_putchar((nb % my_compute_power_rec(10, i)
        / my_compute_power_rec(10, i - 1)) + 48);
    }
    if (big_int != -1)
        my_putchar(big_int);
    return (0);
}
