/*
** EPITECH PROJECT, 2020
** screensaver.h
** File description:
** All definition used in the project : My screensaver
*/

#ifndef my_runner
#define my_runner

// Include
#include "fml.h"
#include "my.h"
#include "resources.h"
#include "physics.h"

// Definition

#define GAME_NAME "Geometry Dash"
#define OPTIONS_NBR 7

// Others

// // Structures // //

// Preload
typedef struct preload {
    int id;
    int data;
    sfColor color;
} preload_t;

// Textures
typedef struct resources {
    sfTexture **backgrounds;
    sfTexture **grounds;
    sfSprite **objects;
    sfSoundBuffer **sfx;
    sfFont *font;
    sfSprite *level_complete;
} resources_t;

// Objects
typedef struct simple_obj {
    sfSprite *sprite;
    sfVector2f *pos;
    sfColor color;
} simple_obj_t;

typedef struct object_d {
    simple_obj_t *obj;
    int id;
    float rotation;
    float glowing;
    sfIntRect size;
    sfBool used;
    struct object_d *next;
} object_t;

typedef struct anim_object_d {
    simple_obj_t *obj;
    int *groups;
    int anim_id;
} anim_object_t;

// Event
typedef struct menu {
    float transition_sec;
    int menu_id;
    int level_id;
    sfMusic *music;
    sfSprite **icons;
} menu_t;

typedef struct event {
    sfVector2i *mouse_coords;
    sfBool escape;
    sfBool click; // Define mouse click only in menus
    sfBool jump; // Define any kind of jump in game
    char practice_gem; // 0 stay normal, 1 add a gem, -1 delete a gem
} event_t;

// Levels
typedef struct initial_level {
    object_t *first_object;
    sfBool reverse;
    sfBool gamemode;
    float level_len;
    sfTime offset;
} initial_level_t;

typedef struct level {
    int id;
    initial_level_t *preset;
    simple_obj_t *background;
    simple_obj_t *ground;
    object_t *object;
    object_t *object_hitbox;
    sfColor **colors;
    sfMusic *music;
} level_t;

// Game
typedef struct my_clock {
    sfClock *clock;
    long frame;
    sfBool new_tick;
} my_clock_t;

typedef struct option {
    int resolution_x;
    int resolution_y;
    int max_fps;
    sfBool automatic_resolution;
    sfBool fullscreen;
    sfBool vsync;
    sfBool ldm;
    sfFloatRect *screen_coords_rect;
} option_t;

typedef struct player {
    int speed;
    int vehicle;
    sfVector2f *pos;
    sfVector2f *pos_disp;
    sfVector2f *move;
    sfIntRect *rect;
    sfBool reverse;
    sfBool visibility;
    sfBool mini;
    sfBool can_jump_block;
    sfBool pad_jump;
} player_t;

typedef struct game {
    level_t *level;
    double percentage;
    sfBool pause;
    sfBool practice;
    int respawn_time;
    sfVector2f *screen_coords;
    player_t *player;
} game_t;

typedef struct technical {
    sfView *view;
    sfSound *sound;
    sfText *text;
} technical_t;

typedef struct head {
    game_t *game;
    option_t *option;
    menu_t *menu;
    event_t *event;
    my_clock_t *clock;
    resources_t *resources;
    technical_t *technical;
    sfRenderWindow *window;
} head_t;

// // Prototype // //

// Mains
int manage_windows(head_t *head);
void main_destroy(head_t *head);
void main_event(head_t *head);
void main_game(head_t *head, game_t *game);
void main_display(head_t *head, level_t *level);
void clock_management(head_t *head, my_clock_t *clock);

// Destroy
void head_destroy(head_t *head);

// Struct initialize
head_t *head_initialize(int ac, char **av);
option_t *option_initialize(void);
event_t *event_initialize(void);
my_clock_t *clock_initialize(void);
game_t *game_initialize(head_t *head, char *level_pathname);
level_t *level_initialize(head_t *head, char *level_pathname);
simple_obj_t *simple_obj_initialize(sfTexture *texture,
sfVector2f *pos, sfColor color);
resources_t *resources_preload(void);
void level_preload(head_t *head, level_t *level, char *level_pathname);
object_t *obj_initialize(void);

// Gamemode
void gamemode_cube(head_t *head, player_t *player);
void cube_display(head_t *head, sfSprite *icon, sfVector2f pos);
void main_hitboxes(head_t *head, game_t *game, level_t *level);

void initialize_portal(object_t *object);
void pad_initialize(player_t *player, object_t *obj);
int portal_hitboxes_switch(game_t *game, object_t *current);
void print_rect(sfIntRect rect);

int pad_hitboxes(player_t *player, object_t *current);
void ring_hitboxes(head_t *head, player_t *player, object_t *current);
void respawn_player(game_t *game);
void kill_player(head_t *head, game_t *game);
int block_hitboxes_switch(object_t *current);
void percentage_load(level_t *level);
void win_player(head_t *head, game_t *game);
sfSprite *load_level_complete(void);
void death_hitboxes(head_t *head, game_t *game,
object_t *current, sfIntRect *rect);
//Variable


#endif /* !my_runner */