/*
** EPITECH PROJECT, 2020
** gamemode_display.c
** File description:
** display the current gamemode
*/

#include "runner.h"

void cube_display(head_t *head, sfSprite *icon, sfVector2f pos)
{
    int rotation = sfSprite_getRotation(icon);
    float rotation_f = (float) rotation;

    pos.y += head->game->screen_coords->y;
    sfSprite_setPosition(icon, pos);
    if (head->game->player->can_jump_block == 0)
        sfSprite_rotate(icon, CUBE_ROTATION *
        -(-1 + head->game->player->reverse * 2));
    else {
        if ((rotation % 90) != 0)
            (rotation % 90 >= 45) ? (sfSprite_rotate(icon,
        CUBE_ROTATION)) : (sfSprite_rotate(icon, -CUBE_ROTATION));
        if (rotation % 90 < CUBE_ROTATION ||
            rotation % 90 > 90 - CUBE_ROTATION)
            sfSprite_setRotation(icon, round(rotation_f / 90) * 90);
    }
    sfRenderWindow_drawSprite(head->window, icon, NULL);
}