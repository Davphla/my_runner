/*
** EPITECH PROJECT, 2021
** hitboxes_2.c
** File description:
** Manage all the rest of hitboxes
*/

#include "runner.h"

int block_hitboxes_switch(object_t *current)
{
    int i;

    for (i = 0; i < NBR_BLOCKS && current->id != HB_BLOCKS[i]; i += 1);
    if (i != NBR_BLOCKS)
        return (PIXELS_IN_BLOCK);
    for (i = 0; i < NBR_HBLOCKS && current->id != HB_HBLOCKS[i]; i += 1);
    if (i != NBR_HBLOCKS)
        return (PIXELS_IN_HALF_BLOCK);
    return (0);
}

int pad_hitboxes(player_t *player, object_t *current)
{
    switch (current->id) {
    case (35):
        pad_initialize(player, current);
        return (player->move->y = (VELOCITY * 1.5) *
        (-1 + player->reverse * 2));
    case (140):
        pad_initialize(player, current);
        return (player->move->y = (VELOCITY / 1.3) *
        (-1 + player->reverse * 2));
    case (67):
        pad_initialize(player, current);
        player->reverse = (player->reverse == 0);
        return (player->move->y = (-VELOCITY * 0.7) *
        (-1 + player->reverse * 2));
    }
    return (0);
}

void ring_hitboxes(head_t *head, player_t *player, object_t *current)
{
    if (head->event->jump == 0)
        return;
    switch (current->id) {
    case (36):
        current->used = 1;
        player->move->y = VELOCITY * 0.85 * (-1 + player->reverse * 2);
        break;
    case (141):
        current->used = 1;
        player->move->y = (VELOCITY * 0.7) * (-1 + player->reverse * 2);
        break;
    case (84):
        current->used = 1;
        player->reverse = 1;
        player->move->y = (-VELOCITY * 1) * (-1 + player->reverse * 2);
        break;
    }
}

int gravity_portal_switch(game_t *game, object_t *current)
{
    switch (current->id) {
    case (10):
        game->player->move->y = (VELOCITY * 0.1);
        return (game->player->reverse = 0);
    case (11):
        game->player->move->y = -(VELOCITY * 0.1);
        return (game->player->reverse = 1);
    }
    return (0);
}

int portal_hitboxes_switch(game_t *game, object_t *current)
{
    gravity_portal_switch(game, current);
    switch (current->id) {
    case (12):
        return (game->player->vehicle = 0);
    case (13):
        return (game->player->vehicle = 1);
    case (47):
        return (game->player->vehicle = 2);
    case (99):
        return (game->player->mini = 0);
    case (101):
        return (game->player->mini = 1);
    case (111):
        return (game->player->vehicle = 3);
    }
    return (0);
}