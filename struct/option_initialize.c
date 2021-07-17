/*
** EPITECH PROJECT, 2020
** option_initialize
** File description:
** All initialisation of options structures
*/

#include "runner.h"

my_clock_t *clock_initialize(void)
{
    my_clock_t *clock = malloc(sizeof(my_clock_t));

    clock->clock = sfClock_create();
    clock->frame = 0;
    clock->new_tick = 0;
    return (clock);
}

void option_initialize_settings(option_t *option, int *settings)
{
    option->resolution_x = settings[0];
    option->resolution_y = settings[1];
    option->max_fps = settings[2];
    option->automatic_resolution = settings[3];
    option->fullscreen = settings[4];
    option->vsync = settings[5];
    option->ldm = settings[6];
    option->screen_coords_rect = fml_sffloatrect_initialize(0, 0,
    option->resolution_x, option->resolution_y);
}

option_t *option_initialize(void)
{
    char buff[500];
    int settings[OPTIONS_NBR];
    option_t *option = malloc(sizeof(option_t));
    int j = 0;
    int fd = open("./option.txt", O_RDONLY);

    for (char i[] = "\0"; read(fd, i, 1); j += 1) {
        buff[j] = *i;
    }
    buff[j] = '\0';
    j = 0;
    for (int i = 0; buff[i] != '\0'; i += 1)
        if (buff[i] == ':') {
            settings[j] = my_getnbr(buff + i + 1);
            j += 1;
        }
    option_initialize_settings(option, settings);
    close(fd);
    return (option);
}
