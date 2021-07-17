/*
** EPITECH PROJECT, 2020
** opening_a_window
** File description:
** graphical programming
*/

#include "runner.h"

int usages(char *str)
{
    char buff[10000];
    char usages[30];

    switch (str[1]) {
    case ('h'):
        my_strcpy(usages, "./usages/help.txt");
        break;
    case ('s'):
        my_strcpy(usages, "./option.txt");
        break;
    case ('l'):
        my_strcpy(usages, "./.legend");
        break;
    case ('p'):
        my_strcpy(usages, "./usages/game_note.txt");
        break;
    default:
        return (my_putstr_error("Unknown option. Retry with -h.\n"));
    }
    read(open(usages, O_RDONLY), buff, 10000);
    return (my_putstr(buff));
}

int error_handling(char *argument)
{
    if (open(argument, O_RDONLY) == -1) {
        my_printf("./my_runner: Invalid map\n");
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac > 1 && av[1][0] == '-')
        return (usages(av[1]));
    if (ac == 2 && error_handling(av[1]))
        return (84);
    return (manage_windows(head_initialize(ac, av)));
}