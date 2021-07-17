/*
** EPITECH PROJECT, 2020
** spaces_and_zeros
** File description:
** add space and zero
*/

#include "include/my.h"

int printf_len_base(int nbr, char type)
{
    switch (type) {
    case ('b'):
        return (my_strlen(my_convertbase(nbr, "01")));
    case ('x' || 'X'):
        return (my_strlen(my_convertbase(nbr, "0123456789abcdef")));
    case ('o'):
        return (my_strlen(my_convertbase(nbr, "01234567")));
    default:
        return (my_nbrlen(nbr));
    }
}

void printf_space_and_zero(int *buff, void *stuff, char *flag_buff, char type)
{
    int len_flag = my_strlen(flag_buff);
    int len;

    if (my_strnbr_cmp(type, "poxXubid") == 1) {
        len = printf_len_base((int) stuff, type);
        if (((buff[2] == 0 && buff[7] == 0) || (buff[2] == 1 && buff[7] == 1))
            && buff[6] >= 2)
            my_putnchar(' ', buff[3] - (buff[4] *
            (buff[4] >= len)) - len_flag - len * (buff[4] < len));
        if ((buff[2] == 0 && buff[7] == 0 && buff[6] == 0) ||
            (buff[2] == 1 && buff[7] == 1 && buff[6] <= 1))
            my_putnchar(' ', buff[3] - len - len_flag);
        if (buff[7] == 0)
            my_putstr(flag_buff);
        if ((buff[7] == 0 && buff[6] >= 2) || (buff[6] == 1 && buff[2] == 0)
            && buff[7] == 0)
            my_putnchar('0', buff[4] - len - (len_flag * (buff[6] < 2)));
    } else
        if ((buff[2] == 0 && buff[7] == 0) || (buff[2] == 1 && buff[7] == 1))
            my_putnchar(' ', buff[3] - ((type != 'c') ?
            (my_strlen((char *) stuff)) : (1)));
}