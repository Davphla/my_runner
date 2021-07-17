/*
** EPITECH PROJECT, 2020
** main_game.c
** File description:
** GD principle game manager
*/

#include "runner.h"

void grounds_calcul(game_t *game, double unit)
{
    game->level->background->pos->y = -game->screen_coords->y / 6 + 1024 / 2;
    game->level->background->pos->x += unit / 10;
    if (game->level->background->pos->x > 2048)
        game->level->background->pos->x -= 2048;
    game->level->ground->pos->y = game->screen_coords->y + 810;
    game->level->ground->pos->x += unit / 2;
    if (game->level->ground->pos->x > 2560)
        game->level->ground->pos->x -= 2560;
}

void cube_display_calcul(game_t *game)
{
    for (int i = 0; i < 8 && game->player->pos_disp->y + (game->
    screen_coords->y) <= 200 && game->screen_coords->y <= 3000; i += 1) {
        game->screen_coords->y += 5;
    }
    for (int i = 0; i < 8 && game->player->pos_disp->y + game->
    screen_coords->y >= 750 && game->screen_coords->y != 0; i += 1) {
        game->screen_coords->y -= 5;
    }

}

void event_calcul(head_t *head, game_t *game)
{
    char temp[10] = "%";

    if (game->player->pos->y >= 5000)
        kill_player(head, game);
    game->percentage = (game->player->pos->x
    / (float) game->level->preset->level_len) * 100;
    sfText_setString(head->technical->text,
    my_strcat(my_nbr_to_str((int) game->percentage), temp));
    if (game->percentage >= 100)
        win_player(head, game);
}

void main_game(head_t *head, game_t *game)
{
    double unit = (PIXEL_PER_SECONDS *
    SPEEDS[head->game->player->speed]) / GP_FPS;

    if (game->respawn_time == 0) {
        if (game->player->pos->x >= -400)
            game->screen_coords->x += unit;
        else
            game->player->pos_disp->x += unit;
        game->player->pos->x += unit;
        grounds_calcul(game, unit);
        main_hitboxes(head, game, game->level);
        gamemode_cube(head, head->game->player);
        cube_display_calcul(game);
        event_calcul(head, game);
    } else {
        game->respawn_time -= 1;
        if (game->respawn_time == 0)
            respawn_player(game);
    }
}