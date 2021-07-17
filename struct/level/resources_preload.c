/*
** EPITECH PROJECT, 2021
** level_preload
** File description:
** Preload the level structure
*/

#include "runner.h"

const char *PL_GAME_GROUNDS[] = {P_GAME_GROUND_01, P_GAME_GROUND_02,
    P_GAME_GROUND_03, P_GAME_GROUND_04, P_GAME_GROUND_05, P_GAME_GROUND_06,
    P_GAME_GROUND_07};

const char *PL_GAME_BG[] = {P_GAME_BG_01, P_GAME_BG_02, P_GAME_BG_03,
    P_GAME_BG_04, P_GAME_BG_05, P_GAME_BG_06, P_GAME_BG_07};

const char *PL_SFX[] = {P_SFX_PLAY, P_SFX_QUIT, P_SFX_HIGHSCORE,
    P_SFX_EXPLODE, P_SFX_ENDSTART};

sfTexture **backgrounds_preload(void)
{
    sfTexture **backgrounds = malloc(sizeof(sfTexture *) * NBR_BG);

    for (int i = 0; i < NBR_BG; i += 1) {
        backgrounds[i] = sfTexture_createFromFile(PL_GAME_BG[i], NULL);
    }
    return (backgrounds);
}

sfTexture **grounds_preload(void)
{
    sfTexture **grounds = malloc(sizeof(sfTexture *) * NBR_GROUND);

    for (int i = 0; i < NBR_GROUND; i += 1) {
        grounds[i] = sfTexture_createFromFile(PL_GAME_GROUNDS[i], NULL);
    }
    return (grounds);
}

sfSprite **objects_preload(void)
{
    sfTexture *gamesheet_1 = sfTexture_createFromFile(P_GAMESHEET_1, NULL);
    sfSprite **objects = malloc(sizeof(sfSprite *) * NBR_OBJ);

    for (int i = 0; i < NBR_OBJ; i += 1) {
        objects[i] = sfSprite_create();
        sfSprite_setTexture(objects[i], gamesheet_1, sfFalse);
        sfSprite_setTextureRect(objects[i], GS_OBJS[i]);
    }
    return (objects);
}

sfSoundBuffer **sfx_preload(void)
{
    sfSoundBuffer **music = malloc(sizeof(sfSoundBuffer *) * NBR_SFX);

    for (int i = 0; i < NBR_SFX; i += 1) {
        music[i] = sfSoundBuffer_createFromFile(PL_SFX[i]);
    }
    return (music);
}

resources_t *resources_preload(void)
{
    resources_t *resources = malloc(sizeof(resources_t));

    resources->backgrounds = backgrounds_preload();
    resources->grounds = grounds_preload();
    resources->objects = objects_preload();
    resources->sfx = sfx_preload();
    resources->font = sfFont_createFromFile(P_FONT_PUSAB);
    resources->level_complete = load_level_complete();
    return (resources);
}
