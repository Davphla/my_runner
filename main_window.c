/*
** EPITECH PROJECT, 2020
** main_window
** File description:
** Manage all the basic stuff with the window, with all default parameters
*/

#include "runner.h"

int create_windows(head_t *head, option_t *option)
{
    sfVideoMode window_mode = {option->resolution_x, option->resolution_y, 32};

    if (option->automatic_resolution == 1) {
        window_mode = *sfVideoMode_getFullscreenModes(NULL);
        option->resolution_x = window_mode.width;
        option->resolution_y = window_mode.height;
    }
    head->window = sfRenderWindow_create(window_mode, GAME_NAME,
    sfDefaultStyle, NULL);
    if (head->window == NULL)
        return (EXIT_FAILURE);
    sfRenderWindow_setFramerateLimit(head->window, GP_FPS);
    sfRenderWindow_setIcon(head->window, 300, 300, sfImage_getPixelsPtr
    (sfImage_createFromFile("./resources/src/icon.png")));
    sfRenderWindow_setVerticalSyncEnabled(head->window, option->vsync);
    head->technical->view = sfView_createFromRect((sfFloatRect)
    {0, 0, option->resolution_x, option->resolution_y});
    sfRenderWindow_setView(head->window, head->technical->view);
    return (0);
}

int manage_windows(head_t *head)
{
    if (create_windows(head, head->option) == 1)
        return (84);
    while (sfRenderWindow_isOpen(head->window)) {
        main_event(head);
        main_game(head, head->game);
        main_display(head, head->game->level);
        clock_management(head, head->clock);
        sfRenderWindow_display(head->window);
    }
    main_destroy(head);
    return (0);
}
