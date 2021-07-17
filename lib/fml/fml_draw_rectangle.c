/*
** EPITECH PROJECT, 2020
** draw_rectangle
** File description:
** Draw a rectangle from x and y size
*/

#include "fml.h"

void fml_draw_rectangle(framebuffer_t *framebuffer,
sfVector2u initial_position, sfVector2u size, sfColor color)
{
    for (int j = initial_position.y; j < size.y; j += 1)
        for (int i = initial_position.x; i < size.x; i += 1)
            fml_put_pixel(framebuffer, i, j, color);
}