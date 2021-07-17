/*
** EPITECH PROJECT, 2021
** fml_sfintrect_initialize.c
** File description:
** initialize sfIntRect
*/

#include "fml.h"
#include <stdlib.h>

sfIntRect *fml_sfintrect_initialize(float left, float top,
float width, float height)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect));

    rect->height = height;
    rect->left = left;
    rect->top = top;
    rect->width = width;
    return (rect);
}