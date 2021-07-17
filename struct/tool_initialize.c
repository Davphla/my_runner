/*
** EPITECH PROJECT, 2020
** tool_initialize.c
** File description:
** Tools used for initialization
*/

#include "runner.h"

simple_obj_t *simple_obj_initialize(sfTexture *texture,
sfVector2f *pos, sfColor color)
{
    simple_obj_t *obj = malloc(sizeof(simple_obj_t));

    obj->sprite = sfSprite_create();
    sfSprite_setTexture(obj->sprite, texture, sfTrue);
    obj->color = color;
    sfSprite_setColor(obj->sprite, color);
    obj->pos = pos;
    return (obj);
}

object_t *obj_initialize(void)
{
    object_t *obj = malloc(sizeof(object_t));

    obj->obj = malloc(sizeof(simple_obj_t));
    obj->obj->pos = fml_vector2f_init(0, 0);
    obj->rotation = 0;
    obj->obj->color = sfWhite;
    obj->id = 0;
    return (obj);
}