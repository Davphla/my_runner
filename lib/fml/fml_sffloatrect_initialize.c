/*
** EPITECH PROJECT, 2021
** fml_sffloatrect_initialize.c
** File description:
** initialize sfFloatRect
*/

#include "fml.h"
#include <stdlib.h>

sfFloatRect *fml_sffloatrect_initialize(float left, float top,
float width, float height)
{
    sfFloatRect *rect = malloc(sizeof(sfFloatRect));

    rect->height = height;
    rect->left = left;
    rect->top = top;
    rect->width = width;
    return (rect);
}