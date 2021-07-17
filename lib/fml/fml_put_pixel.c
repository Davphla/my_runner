/*
** EPITECH PROJECT, 2020
** fml_put_pixel
** File description:
** put a pixel in a framebuffer at x and y coords
*/

#include "fml.h"

void fml_put_pixel(framebuffer_t *framebuffer,
unsigned int x, unsigned int y, sfColor color)
{
    unsigned long coords;

    if (x > framebuffer->width)
        x -= (x / framebuffer->width) * framebuffer->width;
    if (y > framebuffer->height)
        y -= (y / framebuffer->height) * framebuffer->height;
    coords = (x + (y * framebuffer->width)) * 4;
    framebuffer->pixels[coords] = color.r;
    framebuffer->pixels[1 + coords] = color.g;
    framebuffer->pixels[2 + coords] = color.b;
    framebuffer->pixels[3 + coords] = color.a;
    return;
}