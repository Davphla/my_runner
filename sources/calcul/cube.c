/*
** EPITECH PROJECT, 2020
** cube.c
** File description:
** all cube stuff
*/

#include "runner.h"

void gamemode_cube(head_t *head, player_t *player)
{
    if (head->event->jump == 1 && player->can_jump_block == 1)
        player->move->y = VELOCITY * (-1 + player->reverse * 2);
    if (!((head->event->jump == 0 && player->can_jump_block
    == 1)) || player->pad_jump == 1) {
        player->pos->y += -player->move->y;
        player->pos_disp->y += player->move->y;
    } else
        player->move->y = 0;
    if (player->pos->y < GROUND_Y) {
        player->pos->y = GROUND_Y;
        player->pos_disp->y = GROUND_Y_DISP;
    }
    if (player->can_jump_block == 0 && player->move->y
        < MAX_SPEED && player->move->y > -MAX_SPEED)
        player->move->y -= GRAVITY * (-1 + player->reverse * 2);
}