/*
** EPITECH PROJECT, 2021
** level_preload_2.c
** File description:
** Rest of the loading of the level
*/

#include "runner.h"

void percentage_load(level_t *level)
{
    object_t *obj = level->preset->first_object;
    float x = 0;

    for (; obj != NULL; obj = obj->next) {
        if (x < obj->obj->pos->x)
            x = obj->obj->pos->x;
    }
    level->preset->level_len = x + 1000;
}