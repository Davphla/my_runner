/*
** EPITECH PROJECT, 2020
** main_display
** File description:
** Main of all function related to display
*/

#include "runner.h"

void sprite_display(head_t *head, simple_obj_t *obj)
{
    sfSprite_setPosition(obj->sprite, *(obj->pos));
    sfSprite_setColor(obj->sprite, obj->color);
    sfRenderWindow_drawSprite(head->window, obj->sprite, NULL);
}

void background_display(head_t *head, simple_obj_t *bg)
{
    sfSprite_setTextureRect(bg->sprite, (sfIntRect){bg->pos->x,
        bg->pos->y, head->option->resolution_x, head->option->resolution_y});
    sfSprite_setColor(bg->sprite, bg->color);
    sfRenderWindow_drawSprite(head->window, bg->sprite, NULL);
}

void ground_display(head_t *head, simple_obj_t *ground)
{
    sfSprite_setTextureRect(ground->sprite, (sfIntRect)
    {ground->pos->x, 0, head->option->resolution_x, 256});
    sfSprite_setPosition(ground->sprite, (sfVector2f){0, ground->pos->y});
    sfSprite_setColor(ground->sprite, ground->color);
    sfRenderWindow_drawSprite(head->window, ground->sprite, NULL);
}

void level_display(head_t *head, level_t *level)
{
    object_t *current;
    sfVector2f vector;

    current = level->object;
    while (current != NULL) {
        vector.x = current->obj->pos->x - head->game->screen_coords->x;
        vector.y = current->obj->pos->y - head->game->screen_coords->y + 697;
        vector.y = 1500 - vector.y;
        if (sfFloatRect_contains(head->option->screen_coords_rect,
        vector.x, vector.y) == 1) {
            sfSprite_setPosition(current->obj->sprite, vector);
            sfRenderWindow_drawSprite(head->window,
            current->obj->sprite, NULL);
        }
        current = current->next;
    }
}

void main_display(head_t *head, level_t *level)
{
    if (head->clock->new_tick == 0)
        return;
    head->clock->new_tick = 0;
    sfRenderWindow_clear(head->window, sfBlack);
    background_display(head, level->background);
    level_display(head, level);
    ground_display(head, level->ground);
    cube_display(head, head->menu->icons[0], *head->game->player->pos_disp);
    sfRenderWindow_setView(head->window, head->technical->view);
    sfRenderWindow_drawText(head->window, head->technical->text, NULL);
    if (head->game->respawn_time < 0) {
        win_player(head, head->game);
        if (head->game->player->pos_disp->x < 950)
            head->game->player->pos_disp->x += 2;
        else
            head->game->player->pos_disp->y -= 1;
    }
}