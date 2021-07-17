/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** all prototype
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <pwd.h>
#include <grp.h>

#define ABS(value) ((value > 0) ? (value) : (-value))

void my_putchar(char c);
void my_putchar_error(char c);
int my_isneg(int nb);
int my_putnbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_putstr_error(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_is_pos(char const *str);
int my_is_pos_getnbr(char const *str);
int my_matrice_length(char **str);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
char *my_alloc_char(int length, char char_wanted);
int my_nbrcmp(char const *s1, char const *s2);
char *my_alloc_char(int length, char char_wanted);
char *my_nbr_to_str(int nb);
char *my_add_char(char *src, int char_added, char character);
char *my_add_last_char(char *src, int char_added, char character);
char *my_slice_str(char *src, int n);
void my_strswap(char **str, char **str_2);
void my_megaputchar(char chara);
void my_megaputstr(char *str, int n);
int my_putnstr(char const *str, int n);
void my_putnbr_base(unsigned int nbr, char const *base);
int *my_alloc_int(int length, int int_wanted);
int my_strnbr_cmp(char chara, char *str);
void my_putnchar(char c, int n);
int my_nbrlen(int nb);
char *my_convertbase(unsigned int nbr, char const *base);
char **my_add_last_str(char **src, char *str);
int my_printf(char *str, ...);
char **my_init_matrice(void);
char *my_alloc_cat(char *str, char *str_added);
void my_free(int nb_elements, ...);