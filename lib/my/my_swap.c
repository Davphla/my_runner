/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** function that swaps the content of two integers, whose addresses are
** given as a parameter
*/

void my_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
