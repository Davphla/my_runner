/*
** EPITECH PROJECT, 2020
** level_initialize
** File description:
** initialize a level
*/

#include "runner.h"

simple_obj_t *background_initialize(sfTexture *texture, sfColor color)
{
    sfVector2f *vector = fml_vector2f_init(0, 0);
    simple_obj_t *obj;

    obj = simple_obj_initialize(texture, vector, color);
    sfTexture_setRepeated(texture, sfTrue);
    sfSprite_setScale(obj->sprite, (sfVector2f){2.2, 2.2});
    return (obj);
}

simple_obj_t *ground_initialize(option_t *option,
sfTexture *texture, sfColor color)
{
    simple_obj_t *obj = malloc(sizeof(simple_obj_t));

    obj->sprite = sfSprite_create();
    sfTexture_setRepeated(texture, sfTrue);
    sfSprite_setTextureRect(obj->sprite, (sfIntRect)
    {0, 0, option->resolution_x, 256});
    sfSprite_setScale(obj->sprite, (sfVector2f){2, 2});
    sfSprite_setTexture(obj->sprite, texture, sfFalse);
    obj->pos = fml_vector2f_init(0, 0);
    obj->color = color;
    return (obj);
}

player_t *player_initialize(void)
{
    player_t *player = malloc(sizeof(player_t));

    player->pos_disp = fml_vector2f_init(600, GROUND_Y_DISP);
    player->pos = fml_vector2f_init(0, GROUND_Y);
    player->move = fml_vector2f_init(0, 0);
    player->rect = fml_sfintrect_initialize(0, 0,
    PIXELS_IN_BLOCK, PIXELS_IN_BLOCK);
    player->speed = 1;
    player->reverse = 0;
    return (player);
}

level_t *level_initialize(head_t *head, char *level_pathname)
{
    level_t *level = malloc(sizeof(level_t));

    level->preset = malloc(sizeof(initial_level_t));
    level_preload(head, level, level_pathname);
    level->background = background_initialize(head->resources->backgrounds
    [rand() % NBR_BG], (sfColor){rand() % 255, rand() / 2 % 255, 255, 255});
    level->ground = ground_initialize(head->option, head->resources->grounds
    [rand() % NBR_GROUND], (sfColor){rand() % 255 * 1.1, rand()
    / 2 % 255 * 1.1, 255, 255});
    level->preset->offset.microseconds = 0;
    level->music = sfMusic_createFromFile(P_MUSIC_02);
    sfMusic_setPlayingOffset(level->music, level->preset->offset);
    sfMusic_setVolume(level->music, 20);
    sfMusic_play(level->music);
    return (level);
}

game_t *game_initialize(head_t *head, char *level_pathname)
{
    game_t *game = malloc(sizeof(game_t));

    srand(time(NULL));
    game->level = level_initialize(head, level_pathname);
    game->player = player_initialize();
    game->percentage = (game->player->pos->x
    / game->level->preset->level_len) * 100;
    game->pause = 0;
    game->practice = 0;
    game->respawn_time = 0;
    game->screen_coords = fml_vector2f_init(-600, 0);
    return (game);
}