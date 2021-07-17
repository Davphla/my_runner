/*
** EPITECH PROJECT, 2021
** hitboxes.c
** File description:
** Manage all colisions calcul
*/

#include "runner.h"

int block_hitboxes(game_t *game, object_t *current)
{
    int pixels_x = block_hitboxes_switch(current);
    int pixels_y = 0;

    if (pixels_x == 0)
        return (0);
    pixels_y = pixels_x * -(-1 + game->player->reverse * 2);
    pixels_x = PIXELS_IN_BLOCK;
    if (((current->obj->pos->x <= game->player->pos->x && game->player->pos->x
    <= current->obj->pos->x + pixels_x) || (current->obj->pos->x <=
    game->player->pos->x + pixels_x && game->player->pos->x + pixels_x <=
    current->obj->pos->x + pixels_x)) && current->obj->pos->y + pixels_y
    - 10 <= game->player->pos->y && game->player->pos->y <=
    current->obj->pos->y + pixels_y + 10) {
        game->player->pos->y = current->obj->pos->y + pixels_y;
        game->player->pos_disp->y = -(game->player->pos->y)
        + GROUND_Y_DISP + 38;
        game->player->can_jump_block = 1;
        return (2);
    }
    return (1);
}

int speeds_hitboxes(game_t *game, object_t *current)
{
    int i;

    for (i = 200; i < 204 && i != current->id; i += 1);
    if (i == 204)
        return (0);
    initialize_portal(current);
    return (game->player->speed = i - 200);
}

int portal_hitboxes(game_t *game, object_t *current)
{
    int i;

    for (i = 0; i < NBR_PORTALS && current->id != HB_PORTALS[i]; i += 1);
    if (i == NBR_PORTALS)
        return (0);
    initialize_portal(current);
    return (portal_hitboxes_switch(game, current));
}

void main_hitboxes_2(head_t *head, game_t *game,
object_t *current)
{
    sfIntRect rect;
    int block_hit = 0;

    rect = GS_OBJS[current->id - 1];
    rect.height *= 1.75;
    rect.width *= 1.75;
    rect.left = current->obj->pos->x;
    rect.top = current->obj->pos->y;
    if (current->id == 35 || current->id == 140 || current->id == 67)
        rect.height *= 4;
    block_hit = block_hitboxes(game, current);
    if (current->used == 0 && sfIntRect_intersects(&rect,
        game->player->rect, NULL) == 1) {
        (block_hit == 1 && (int) game->percentage != 51)
        ? (kill_player(head, game)) : 0;
        speeds_hitboxes(game, current);
        portal_hitboxes(game, current);
        ring_hitboxes(head, game->player, current);
        pad_hitboxes(game->player, current);
        death_hitboxes(head, game, current, &rect);
    }
}

void main_hitboxes(head_t *head, game_t *game, level_t *level)
{
    object_t *current;

    game->player->pad_jump = 0;
    game->player->can_jump_block = (game->player->pos->y == GROUND_Y
    && game->player->reverse == 0);
    current = level->object_hitbox;
    game->player->rect->left = game->player->pos->x;
    game->player->rect->top = game->player->pos->y;
    while (current != NULL) {
        if (game->respawn_time != 0)
            break;
        main_hitboxes_2(head, game, current);
        current = current->next;
    }
}