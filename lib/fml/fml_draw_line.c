/*
** EPITECH PROJECT, 2020
** draw_line
** File description:
** draw a line
*/

#include "fml.h"

void fml_draw_line(framebuffer_t *framebuffer,
sfVector2f point_a, sfVector2f point_b, sfColor color)
{
    float a = (point_a.y - point_b.y) / ((point_a.x - point_b.x) +
    (point_a.x == point_b.x));
    float b = point_a.y - (a * point_a.x);

    if (point_b.x - point_a.x > point_b.y - point_a.y) {
        for (int i = point_a.x; i != point_b.x; i += 1)
            fml_put_pixel(framebuffer, i, a * i + b, color);
    } else {
        for (int i = point_a.y; i != point_b.y; i += 1)
            fml_put_pixel(framebuffer, (i - b) / a, i, color);
    }
}