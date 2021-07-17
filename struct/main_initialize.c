/*
** EPITECH PROJECT, 2020
** initialize.c
** File description:
** initialize structures
*/

#include "runner.h"

menu_t *menu_initialize(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    sfTexture *cube = sfTexture_createFromFile("resources/src/Cube119.png",
    NULL);

    menu->level_id = 0;
    menu->menu_id = 1;
    menu->transition_sec = 0;
    menu->icons = malloc(sizeof(sfSprite *) * 7);
    menu->icons[0] = sfSprite_create();
    sfSprite_setTexture(menu->icons[0], cube, sfTrue);
    sfSprite_setOrigin(menu->icons[0], (sfVector2f){60, 60});
    sfSprite_setScale(menu->icons[0], (sfVector2f){0.9, 0.9});
    return (menu);
}

event_t *event_initialize(void)
{
    event_t *event = malloc(sizeof(event_t));

    event->mouse_coords = malloc(sizeof(sfVector2i));
    event->click = 0;
    event->escape = 0;
    event->jump = 0;
    event->mouse_coords->x = 0;
    event->mouse_coords->y = 0;
    event->practice_gem = 0;
    return (event);
}

technical_t *technical_initialize(head_t *head)
{
    technical_t *technical = malloc(sizeof(technical_t));

    technical->sound = sfSound_create();
    technical->text = sfText_create();
    sfText_setOrigin(technical->text, (sfVector2f){50, 0});
    sfText_setPosition(technical->text,
    (sfVector2f){head->option->resolution_x / 2, 0});
    sfText_setOutlineThickness(technical->text, 1.8);
    sfText_setScale(technical->text, (sfVector2f){1.5, 1.5});
    sfText_setString(technical->text, "0%");
    sfText_setFont(technical->text, head->resources->font);
    return (technical);
}

head_t *head_initialize(int ac, char **av)
{
    head_t *head = malloc(sizeof(head_t));

    head->event = event_initialize();
    head->option = option_initialize();
    head->clock = clock_initialize();
    head->menu = menu_initialize();
    head->resources = resources_preload();
    head->technical = technical_initialize(head);
    if (ac == 2)
        head->game = game_initialize(head, av[1]);
    else
        head->game = game_initialize(head, "level/level_1");
    return (head);
}