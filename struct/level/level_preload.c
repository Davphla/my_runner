/*
** EPITECH PROJECT, 2021
** level_preload
** File description:
** Preload the level data
*/

#include "runner.h"

int instruction_loader(object_t *obj, int instruction, int parameters)
{
    switch (instruction) {
    case (1):
        return (obj->id = parameters);
    case (2):
        return (obj->obj->pos->x = (float)parameters);
    case (3):
        return (obj->obj->pos->y = (float)parameters);
    case (6):
        return (obj->rotation = (float)parameters);
    default:
        return (0);
    }
}

object_t *single_object_initialize(resources_t *resources, object_t *obj)
{
    obj->obj->sprite = sfSprite_copy(resources->objects[obj->id - 1]);
    obj->size = GS_OBJS[obj->id - 1];
    obj->obj->pos->x *= PIXEL_IN_UNIT;
    obj->obj->pos->y *= PIXEL_IN_UNIT;
    obj->glowing = 0;
    obj->used = 0;
    sfSprite_setScale(obj->obj->sprite, (sfVector2f){1.75, 1.75});
    sfSprite_setOrigin(obj->obj->sprite, (sfVector2f)
    {obj->size.width / 2, obj->size.height / 2});
    sfSprite_setRotation(obj->obj->sprite, obj->rotation);
    return (obj);
}

object_t *single_object_load(resources_t *resources, char **buff)
{
    object_t *obj = obj_initialize();
    int instruction;
    int parameters;

    for (; *(*buff) != ';'; *buff += 1) {
        instruction = my_getnbr(*(buff));
        for (; **buff != ','; *buff += 1);
        *buff += 1;
        parameters = my_getnbr(*buff);
        for (; **buff != ',' && *(*buff + 1) != ';'; *buff += 1);
        (instruction == 1 && parameters == 1715) ? (parameters = 9) : 0;
        instruction_loader(obj, instruction, parameters);
    }
    *buff += 1;
    if (obj->id < NBR_OBJ && obj->id != 0)
        return (single_object_initialize(resources, obj));
    free(obj);
    if (**buff != '\0')
        return (single_object_load(resources, buff));
    return (NULL);
}

void object_load(head_t *head, level_t *level, char **buff)
{
    object_t *current = single_object_load(head->resources, buff);

    if (current == NULL)
        return;
    level->object = current;
    level->preset->first_object = current;
    level->object_hitbox = current;
    current->next = NULL;
    for (; **buff != '\0';) {
        current->next = single_object_load(head->resources, buff);
        if (current->next != NULL)
            current = current->next;
        current->next = NULL;
    }
}

void level_preload(head_t *head, level_t *level, char *level_pathname)
{
    int fd = open(level_pathname, O_RDONLY);
    char buff[1];
    char *data = malloc(sizeof(char) * 100000);
    char *first_data = data;
    int i = 0;

    for (; read(fd, buff, 1); i += 1)
        data[i] = *buff;
    data[i] = '\0';
    for (; *data != ';'; data += 1);
    data += 1;
    level->preset->gamemode = 0;
    level->preset->reverse = 0;
    object_load(head, level, &data);
    percentage_load(level);
    free(first_data);
}