/*
** EPITECH PROJECT, 2021
** respawn.c
** File description:
** Respawn the player
*/

#include "runner.h"

void win_player(head_t *head, game_t *game)
{
    if (game->respawn_time == 0) {
        sfSound_setBuffer(head->technical->sound, head->resources->sfx[4]);
        sfSound_play(head->technical->sound);
    }
    sfRenderWindow_drawSprite(head->window,
    head->resources->level_complete, NULL);
    game->respawn_time = -1;
}

void kill_player(head_t *head, game_t *game)
{
    sfMusic_stop(game->level->music);
    game->player->pos_disp->x = 2000;
    sfSound_setBuffer(head->technical->sound, head->resources->sfx[3]);
    sfSound_play(head->technical->sound);
    game->respawn_time = GP_FPS;
    sfSprite_setRotation(head->menu->icons[0], 0);
}

void respawn_player(game_t *game)
{
    object_t *obj = game->level->preset->first_object;

    sfMusic_setPlayingOffset(game->level->music, game->level->preset->offset);
    sfMusic_play(game->level->music);
    game->screen_coords->x = -600;
    game->player->pos->x = 0;
    game->screen_coords->y = 0;
    game->player->pos->y = GROUND_Y;
    game->player->pos_disp->x = 600;
    game->player->pos_disp->y = GROUND_Y_DISP;
    for (; obj != NULL; obj = obj->next)
        obj->used = 0;
    game->player->reverse = game->level->preset->reverse;
    game->player->vehicle = game->level->preset->gamemode;
    game->player->speed = 1;
}