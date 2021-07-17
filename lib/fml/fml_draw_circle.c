/*
** EPITECH PROJECT, 2020
** draw_circle
** File description:
** draw a circle
*/
#include "fml.h"
#include <math.h>
void fml_draw_circle(framebuffer_t *framebuffer,
sfVector2i center, int radius, sfColor color)
{
    for (int i = center.y - radius; i < center.y + radius; i += 1) {
        for (int j = center.x - radius; j < center.x + radius; j += 1)
            (pow(j - center.x, 2) + pow(i - center.y, 2) <= pow(radius, 2)) ?
        (fml_put_pixel(framebuffer, j, i, color)) : 0;
    }
}