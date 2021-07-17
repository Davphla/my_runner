/*
** EPITECH PROJECT, 2020
** flags
** File description:
** all flags 1
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

void printf_my_putptr(void *pointer, char flag, int *buff)
{
    if (flag == 'p')
        my_putnbr_base((unsigned int) pointer, "0123456789abcdef");
    if (flag == 'o')
        my_putnbr_base((unsigned int)pointer, "01234567");
    if (flag == 'x')
        my_putnbr_base((unsigned int)pointer, "0123456789abcdef");
    if (flag == 'X')
        my_putnbr_base((unsigned int)pointer, "0123456789ABCDEF");
    if (flag == 'u')
        my_putnbr_base((unsigned int)pointer, "0123456789");
    if (flag == 'b')
        my_putnbr_base((unsigned int)pointer, "01");
    if (flag == 'S')
        my_megaputstr((char *) pointer, (buff[6] >= 2)
        ? buff[4] : my_strlen(pointer));
    if (flag == 's')
        my_putnstr((char *) pointer, (buff[6] >= 2)
        ? buff[4] : my_strlen(pointer));
}

void printf_flags_specifier(char flag, char **flag_buff, char type, int stuff)
{
    if (flag == '+' || flag == ' ')
        if (stuff > 0 && my_strnbr_cmp(type, "pd") == 1) {
            (flag == '+') ?
        (*flag_buff = my_add_last_char(*flag_buff, 1, '+')) :
            (*flag_buff = my_add_last_char(*flag_buff, 1, ' '));
        }
    if (flag == '#') {
        if (my_strnbr_cmp(type, "oxXp") == 1)
            *flag_buff = my_add_last_char(*flag_buff, 1, '0');
        if (my_strnbr_cmp(type, "xXp") == 1)
            *flag_buff = my_add_last_char(*flag_buff, 1, 'x');
    }
}

void printf_flags_specifier_2(int flag, int *nbr)
{
    short int nbr_h = *nbr;
    char nbr_hh = *nbr;
    long int nbr_l = *nbr;
    long long int nbr_ll = *nbr;

    switch (flag) {
    case (1):
        *nbr = nbr_h;
        break;
    case (2):
        *nbr = nbr_hh;
        break;
    case (3):
        *nbr = nbr_l;
        break;
    case (4):
        *nbr = nbr_ll;
        break;
    }
}
