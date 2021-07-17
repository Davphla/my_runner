/*
** EPITECH PROJECT, 2020
** clock.c
** File description:
** Manage all clocks
*/

#include "runner.h"

void clock_management(head_t *head, my_clock_t *clock)
{
    if (sfClock_getElapsedTime(clock->clock).microseconds >
    (1000000 / head->option->max_fps)) {
        clock->frame += 1;
        sfClock_restart(clock->clock);
        clock->new_tick = 1;
    }
}