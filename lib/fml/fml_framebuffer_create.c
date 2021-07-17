/*
** EPITECH PROJECT, 2020
** framebuffer_create.c
** File description:
** create a framebuffer with total x, total y and color
*/

#include "fml.h"
#include <stdlib.h>

framebuffer_t *fb_create(unsigned int width, unsigned int height)
{
    framebuffer_t *frame = malloc(sizeof(framebuffer_t));

    frame->pixels = malloc(sizeof(sfUint8) * width * height * (32 / 8) * 1.05);
    frame->height = height;
    frame->width = width;
    return (frame);
}

void fb_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    return;
}

void fb_restart(framebuffer_t *framebuffer, double coefficient)
{
    for (int i = 0; i < framebuffer->height * framebuffer->width * 4; i += 1)
        framebuffer->pixels[i] *= coefficient;
}

void fb_recolor(framebuffer_t *framebuffer, sfColor color)
{
    for (unsigned int i = 0; i < framebuffer->height *
    framebuffer->width * 4; i += 4) {
        framebuffer->pixels[i] = color.r;
        framebuffer->pixels[i + 1] = color.g;
        framebuffer->pixels[i + 2] = color.b;
        framebuffer->pixels[i + 3] = color.a;
    }
}