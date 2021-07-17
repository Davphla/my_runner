/*
** EPITECH PROJECT, 2020
** my_init_matrice
** File description:
** Initiate an empty matrice
*/
#include <stdlib.h>

char **my_init_matrice(void)
{
    char **pathname = malloc(sizeof(char *) * 2);
    *pathname = malloc(sizeof(char) * (2));
    *pathname = 0;
    return (pathname);
}