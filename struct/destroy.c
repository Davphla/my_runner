/*
** EPITECH PROJECT, 2020
** destroy.c
** File description:
** destroy
*/

#include "runner.h"

void simple_obj_destroy(simple_obj_t *obj)
{
    sfSprite_destroy(obj->sprite);
    free(obj->pos);
    free(obj);
}

void game_destroy(game_t *game)
{
    object_t *current = game->level->preset->first_object->next;

    game->level->object = game->level->preset->first_object;
    simple_obj_destroy(game->level->background);
    simple_obj_destroy(game->level->ground);
    sfMusic_destroy(game->level->music);
    while (game->level->object != NULL) {
        free(game->level->object);
        game->level->object = current;
        if (current != NULL)
            current = current->next;
    }
    free(game->level);
    my_free(4, game->screen_coords,
    game->player->pos_disp, game->player->move, game->player);
    free(game);
}

void resources_destroy(resources_t *resources)
{
    for (int i = 0; i < NBR_BG; i += 1)
        sfTexture_destroy(resources->backgrounds[i]);
    free(resources->backgrounds);
    for (int i = 0; i < NBR_GROUND; i += 1)
        sfTexture_destroy(resources->grounds[i]);
    free(resources->grounds);
    for (int i = 0; i < NBR_OBJ; i += 1)
        sfSprite_destroy(resources->objects[i]);
    free(resources->objects);
    for (int i = 0; i < NBR_SFX; i += 1)
        sfSoundBuffer_destroy(resources->sfx[i]);
    free(resources->sfx);
    free(resources);
}

void head_destroy(head_t *head)
{
    if (head->game != NULL)
        game_destroy(head->game);
    sfClock_destroy(head->clock->clock);
    free(head->option->screen_coords_rect);
    resources_destroy(head->resources);
    sfView_destroy(head->technical->view);
    sfSound_destroy(head->technical->sound);
    my_free(5, head->option, head->clock, head->event, head->menu, head);
    return;
}

void main_destroy(head_t *head)
{
    sfRenderWindow_destroy(head->window);
    head_destroy(head);
    return;
}