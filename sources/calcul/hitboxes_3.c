/*
** EPITECH PROJECT, 2021
** hitbox
** File description:
** hitboxes_3
*/

#include "runner.h"

void death_hitboxes(head_t *head, game_t *game,
object_t *current, sfIntRect *rect)
{
    int i;

    for (i = 0; i < NBR_DEATH && current->id != HB_DEATH[i]; i += 1);
    if (i == NBR_DEATH)
        return;
    rect->height *= 0.7;
    rect->width *= 0.6;
    rect->top += 10;
    rect->left += 20;
    if (sfIntRect_intersects(rect, game->player->rect, NULL) == 1) {
        kill_player(head, game);
    }
}