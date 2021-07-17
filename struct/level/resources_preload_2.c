/*
** EPITECH PROJECT, 2021
** resources_preload_2.c
** File description:
** resources_preload_2
*/

#include "runner.h"

sfSprite *load_level_complete(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(P_GAMESHEET_2, NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, GS_LEVEL_COMPLETE);
    sfSprite_setScale(sprite, (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(sprite, (sfVector2f){300, 450});
    return (sprite);
}