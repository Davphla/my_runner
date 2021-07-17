/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** replicate printf function
*/

#include <stdarg.h>
#include "./include/my.h"
#include "./include/flag.h"

void printf_my_putptr(void *pointer, char flag, int *buff);
void printf_flags_specifier_2(int flag, int *nbr);
void printf_flags_specifier(char flag, char *flag_buff, char type, int stuff);
int printf_my_strnbr_cmp(char chara, char *str);
void printf_space_and_zero(int *buff, void *stuff, char *flag_buff, char type);

int printf_flag_detection_buff(char *str, char *type, int *buff, int *i)
{
    for (*i = 0; my_strnbr_cmp(str[*i], "+ #") == 1; *i += 1) {
        (str[*i] == '#') ? (buff[0] = 1) : (buff[0] = buff[0]);
        (str[*i] == '+') ? (buff[1] = 2) : (buff[1] = buff[1]);
        (str[*i] == ' ' && buff[1] == 0) ? (buff[1] = 1) : (buff[1] = buff[1]);
    }
    for (; my_strnbr_cmp(str[*i], "-0") == 1; *i += 1)
        (str[*i] == '-') ? (buff[2] = 1) : (buff[2] = buff[2]);
    buff[3] = my_getnbr(str + *i);
    (str[*i - 1] == '0') ? (buff[6] = 1) : (buff[6] = buff[6]);
    for (; my_strnbr_cmp(str[*i], "0123456789") == 1; *i += 1);
    for (int j = *i; my_strnbr_cmp(str[*i], ".") == 1 && j == *i; *i += 1)
        buff[6] += 2;
    buff[4] = my_getnbr(str + *i);
    for (; my_strnbr_cmp(str[*i], "0123456789") == 1; *i += 1);
    buff[5] += (my_strnbr_cmp(str[*i], "hl") +
    (str[*i + 1] == str[*i])) + (2 * (str[*i] == 'l'));
    for (int j = *i; my_strnbr_cmp(str[*i], "hl") == 1 && *i < j + 2; *i += 1);
    *type = str[*i];
    return (-(my_strnbr_cmp(str[*i], "poxXubscidSC") == 0));
}

void printf_flag_detection_error(int *buff)
{
    my_putchar('%');
    for (int i = 0; i < 3; i += 1)
        if (dico[(i * 3) + buff[i]] != 0)
            my_putchar(dico[(i * 3) + buff[i]]);
    if (buff[6] < 2 && (buff[3] != 0 || buff[4] != 0)) {
        if (buff[6] == 1 && buff[2] == 0)
            my_putchar('0');
        my_putnbr(buff[3]);
    } else if (buff[6] != 0 && (buff[3] != 0 || buff[4] != 0)) {
        if (buff[6] == 3 && buff[2] == 0)
            my_putchar('0');
        if (buff[3] != 0)
            my_putnbr(buff[3]);
        my_putchar('.');
        my_putnbr(buff[4]);
    }
}

int printf_flag_detection_initialization(char **str, void **stuff,
char *type, int *buff)
{
    int i = 0;
    int error = 0;

    *str += 1;
    for (i = 0; my_strnbr_cmp(str[0][i], "poxXubscidSC%") == 0
    && str[0][i] != '\0'; i += 1);
    if (str[0][i] == '%') {
        *str += i;
        my_putchar('%');
        return (-1);
    }
    if (printf_flag_detection_buff(*str, type, buff, &i) == -1) {
        printf_flag_detection_error(buff);
        *str += i - 1;
        return (-1);
    }
    if (my_strnbr_cmp(*type, "poxXubid") == 1)
        printf_flags_specifier_2(buff[5], (int *) stuff);
    return (0);
}

int printf_flag_detection(char **str, void *stuff)
{
    int i;
    char type;
    int *buff = my_alloc_int(9, 0);
    char *flag_buff = my_alloc_char(1, '\0');

    if (printf_flag_detection_initialization(str, &stuff, &type, buff) == -1)
        return (0);
    for (; type == 'p' && buff[0] != 1; buff[0] = 1);
    if (my_strnbr_cmp(type, "poxXubid") == 1)
        for (int i = 1; i >= 0; i -= 1)
            printf_flags_specifier(dico[(i * 3) +
            buff[i]], (char *) &flag_buff, type, (int) stuff);
    printf_space_and_zero(buff, stuff, flag_buff, type);
    for (i = 0; i < 3 && FLAGS[i].flag != type; i += 1);
    if (FLAGS[i].flag == type)
        FLAGS[i].f(stuff);
    else
        printf_my_putptr(stuff, type, buff);
    buff[7] = 1;
    printf_space_and_zero(buff, stuff, flag_buff, type);
    return (1);
}

int my_printf(char *str, ...)
{
    va_list ap;
    void *stuff;
    int next_arg = 0;

    va_start(ap, str);
    stuff = va_arg(ap, void *);
    for (; *str != '\0';) {
        if (*str == '%')
            next_arg = printf_flag_detection(&str, stuff);
        else
            my_putchar(*str);
        for (; my_strnbr_cmp(*str, "poxXubscidSC") == 0
        && next_arg == 1; str += 1);
        for (; next_arg == 1; next_arg = 0)
            stuff = va_arg(ap, void *);
        str += 1;
    }
}