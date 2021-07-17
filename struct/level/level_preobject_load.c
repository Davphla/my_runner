/*
** EPITECH PROJECT, 2021
** level_preobject_load.c
** File description:
** Do all the stuff around pre object load
*/

#include "runner.h"

preload_t preload_base64(char *buff, int *i)
{
    preload_t preload;

    preload.id = my_getnbr(buff + *i + 2);
    for (*i += 1; buff[*i - 1] == ','; *i += 1);
    if (preload.id != 38) {
        preload.data = my_getnbr(buff + *i + 1);
        for (*i += 1; buff[*i - 1] == ',' || buff[*i - 1] == ';'; *i += 1);
    }
    return (preload);
}

int pre_object_load(char *buff)
{
    int i = 0;

    for (; i < 256 && buff[i] != ';'; i += 1) {
        if (buff[i] == 'k')
            preload_base64(buff, &i);
    }
    return (buff[i] == ';');
}