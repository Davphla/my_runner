/*
** EPITECH PROJECT, 2021
** tool_calcul.c
** File description:
** All calcul stuff
*/

#include "runner.h"

void initialize_portal(object_t *object)
{
    object->used = 1;
    object->glowing = 100;
}

void pad_initialize(player_t *player, object_t *obj)
{
    obj->used = 1;
    player->pad_jump = 1;
}

void print_rect(sfIntRect rect)
{
    my_printf("x:%d y:%d - x2:%d y2:%d\n",
    rect.left, rect.top, rect.width, rect.height);
}