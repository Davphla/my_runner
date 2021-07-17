/*
** EPITECH PROJECT, 2020
** framebuffer.h
** File description:
** frame buff file
*/

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <math.h>

//Structures

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

//Function

framebuffer_t *fb_create(unsigned int width, unsigned int height);
void fb_destroy(framebuffer_t *framebuffer);
void fb_restart(framebuffer_t *framebuffer, double coefficient);
void fb_recolor(framebuffer_t *framebuffer, sfColor color);

void fml_put_pixel(framebuffer_t *framebuffer,
unsigned int x, unsigned int y, sfColor color);

void fml_draw_rectangle(framebuffer_t *framebuffer,
sfVector2u initial_position, sfVector2u size, sfColor color);

void fml_draw_line(framebuffer_t *framebuffer,
sfVector2f point_a, sfVector2f point_b, sfColor color);

void fml_draw_circle(framebuffer_t *framebuffer,
sfVector2i center, int radius, sfColor color);

sfVector2f *fml_vector2f_init(float x, float y);

sfIntRect *fml_sfintrect_initialize(float left, float top,
float width, float height);
sfFloatRect *fml_sffloatrect_initialize(float left, float top,
float width, float height);
#endif /* !FRAMEBUFFER_H_ */