/*
** EPITECH PROJECT, 2020
** event.c
** File description:
** main of event structures
*/

#include "runner.h"

void window_event(head_t *head, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(head->window);
}

void game_event(head_t *head, event_t *event, sfEvent sf_evt)
{
    if (sf_evt.type == sfEvtMouseButtonPressed &&
        sf_evt.mouseButton.button == 0)
        event->jump = 1;
    else if (sf_evt.type == sfEvtMouseButtonReleased
        && sf_evt.mouseButton.button == 0)
        event->jump = 0;
    if (sf_evt.type == sfEvtKeyPressed) {
        if (sf_evt.key.code == sfKeySpace || sf_evt.key.code == sfKeyUp)
            event->jump = 1;
        event->escape = (sf_evt.key.code == sfKeyEscape);
    }
    if (sf_evt.type == sfEvtKeyReleased)
        if (sf_evt.key.code == sfKeySpace || sf_evt.key.code == sfKeyUp)
            event->jump = 0;
    if (head->game->practice == 1) {
        event->practice_gem = -(sf_evt.key.code == sfKeyX);
        event->practice_gem = (sf_evt.key.code == sfKeyW);
    }
}

void menu_event(event_t *event, sfEvent sf_evt)
{
    event->click = (sf_evt.type == sfEvtMouseButtonPressed
    && sf_evt.mouseButton.button == 0);
    if (sf_evt.type == sfEvtKeyPressed)
        event->escape = (sf_evt.key.code == sfKeyEscape);
}

void general_event(event_t *event, sfEvent sf_evt)
{
    if (sf_evt.type == sfEvtMouseMoved) {
        event->mouse_coords->x = sf_evt.mouseMove.x;
        event->mouse_coords->y = sf_evt.mouseMove.y;
    }
}

void main_event(head_t *head)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(head->window, &event)) {
        window_event(head, event);
        general_event(head->event, event);
        if (head->game == NULL)
            menu_event(head->event, event);
        else
            game_event(head, head->event, event);
    }
}