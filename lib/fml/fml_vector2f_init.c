/*
** EPITECH PROJECT, 2020
** vector2f_init
** File description:
** initialize a vector 2f
*/

#include "fml.h"
#include <stdlib.h>

sfVector2f *fml_vector2f_init(float x, float y)
{
    sfVector2f *vector = malloc(sizeof(sfVector2f));

    vector->x = x;
    vector->y = y;
    return (vector);
}