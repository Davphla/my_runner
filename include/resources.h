/*
** EPITECH PROJECT, 2020
** texture.h
** File description:
** All constant textures and dictionnary of the game
*/

#ifndef GD_TEXTURE
#define GD_TEXTURE

#include "my.h"
#include "fml.h"

// // Resources // //

// Paths
#define P_MUSIC "resources/music/"
#define P_SRC "resources/src/"

// Music
#define P_MUSIC_01 P_MUSIC "creo-lightmare.ogg"
#define P_MUSIC_02 P_MUSIC "496047.ogg"

// SFX
#define P_SFX_PLAY P_SRC "playSound.ogg"
#define P_SFX_QUIT P_SRC "quitSound.ogg"
#define P_SFX_HIGHSCORE P_SRC "highscoreGet.ogg"
#define P_SFX_EXPLODE P_SRC "explode.ogg"
#define P_SFX_ENDSTART P_SRC "endStart.ogg"

static const int NBR_SFX = 5;

// Menu
#define P_FONT_1 P_SRC "bigFont-hd.png"
#define P_FONT_2 P_SRC "goldFont-hd.png"

#define P_LOADING_CIRCLE P_SRC "loadingCircle-hd.png"

// // Textures // //

// Background
#define P_GAME_BG_01 P_SRC "game_bg_01_001-hd.png"
#define P_GAME_BG_02 P_SRC "game_bg_02_001-hd.png"
#define P_GAME_BG_03 P_SRC "game_bg_03_001-hd.png"
#define P_GAME_BG_04 P_SRC "game_bg_04_001-hd.png"
#define P_GAME_BG_05 P_SRC "game_bg_05_001-hd.png"
#define P_GAME_BG_06 P_SRC "game_bg_06_001-hd.png"
#define P_GAME_BG_07 P_SRC "game_bg_07_001-hd.png"

#define NBR_BG 7

// Ground
#define P_GAME_GROUND_01 P_SRC "groundSquare_01_001-hd.png"
#define P_GAME_GROUND_02 P_SRC "groundSquare_02_001-hd.png"
#define P_GAME_GROUND_03 P_SRC "groundSquare_03_001-hd.png"
#define P_GAME_GROUND_04 P_SRC "groundSquare_04_001-hd.png"
#define P_GAME_GROUND_05 P_SRC "groundSquare_05_001-hd.png"
#define P_GAME_GROUND_06 P_SRC "groundSquare_06_001-hd.png"
#define P_GAME_GROUND_07 P_SRC "groundSquare_07_001-hd.png"

#define NBR_GROUND 7

// Font
#define P_FONT_PUSAB P_SRC "PUSAB___.otf"

// Gamesheet
#define P_GAMESHEET_1 P_SRC "GJ_GameSheet-hd.png"
#define P_GAMESHEET_2 P_SRC "GJ_GameSheet02-hd.png"

// // IntRect // //

// Gamesheet 1
static const sfIntRect GS_NULL = {0, 0, 0, 0};
static const sfIntRect GS_1 = {213, 1640, 60, 60};
static const sfIntRect GS_2 = {127, 1657, 60, 60};
static const sfIntRect GS_3 = {64, 1666, 60, 60};
static const sfIntRect GS_4 = {1, 1695, 60, 60};
static const sfIntRect GS_5 = {1046, 1179, 60, 60};
static const sfIntRect GS_6 = {1109, 1179, 60, 60};
static const sfIntRect GS_7 = {1172, 1230, 60, 60};
static const sfIntRect GS_8 = {312, 1573, 60, 60};
static const sfIntRect GS_9 = {631, 1607, 60, 48};
static const sfIntRect GS_10 = {436, 99, 48, 150};
static const sfIntRect GS_11 = {436, 252, 48, 150};
static const sfIntRect GS_12 = {184, 218, 66, 170};
static const sfIntRect GS_13 = {1636, 1079, 66, 170};
static const sfIntRect GS_15 = {234, 129, 14, 86};
static const sfIntRect GS_16 = {396, 656, 12, 54};
static const sfIntRect GS_17 = {396, 713, 10, 26};
static const sfIntRect GS_18 = {892, 1, 256, 84};
static const sfIntRect GS_19 = {487, 8, 208, 74};
static const sfIntRect GS_20 = {253, 595, 146, 58};
static const sfIntRect GS_21 = {1064, 175, 84, 26};
static const sfIntRect GS_35 = {107, 2035, 50, 8};
static const sfIntRect GS_36 = {127, 1594, 60, 60};
static const sfIntRect GS_39 = {972, 1367, 60, 28};
static const sfIntRect GS_40 = {1086, 1305, 60, 28};
static const sfIntRect GS_41 = {1014, 404, 38, 140};
static const sfIntRect GS_47 = {1564, 1082, 66, 170};
static const sfIntRect GS_48 = {1, 91, 230, 76};
static const sfIntRect GS_49 = {253, 461, 160, 64};
static const sfIntRect GS_50 = {688, 952, 100, 100};
static const sfIntRect GS_51 = {249, 963, 100, 100};
static const sfIntRect GS_52 = {253, 1715, 60, 50};
static const sfIntRect GS_53 = {565, 1253, 60, 60};
static const sfIntRect GS_54 = {568, 1909, 60, 58};
static const sfIntRect GS_60 = {1378, 1132, 56, 60};
static const sfIntRect GS_61 = {316, 1807, 60, 36};
static const sfIntRect GS_62 = {810, 1609, 60, 32};
static const sfIntRect GS_63 = {1311, 1353, 60, 60};
static const sfIntRect GS_64 = {300, 1328, 30, 28};
static const sfIntRect GS_65 = {844, 1563, 60, 32};
static const sfIntRect GS_66 = {890, 1518, 60, 32};
static const sfIntRect GS_67 = {1, 2035, 50, 12};
static const sfIntRect GS_68 = {960, 1434, 60, 32};
static const sfIntRect GS_69 = {1374, 1380, 60, 60};
static const sfIntRect GS_70 = {1311, 1416, 60, 60};
static const sfIntRect GS_71 = {1494, 1406, 60, 60};
static const sfIntRect GS_72 = {1557, 1447, 60, 60};
static const sfIntRect GS_73 = {1620, 1490, 60, 60};
static const sfIntRect GS_74 = {1683, 1516, 60, 60};
static const sfIntRect GS_75 = {1746, 1539, 60, 60};
static const sfIntRect GS_76 = {1374, 1443, 60, 60};
static const sfIntRect GS_77 = {1494, 1469, 60, 60};
static const sfIntRect GS_78 = {1557, 1510, 60, 60};
static const sfIntRect GS_80 = {1620, 1553, 60, 60};
static const sfIntRect GS_81 = {1683, 1579, 60, 60};
static const sfIntRect GS_82 = {1705, 1215, 60, 60};
static const sfIntRect GS_83 = {1311, 1290, 60, 60};
static const sfIntRect GS_84 = {465, 1358, 60, 60};
static const sfIntRect GS_85 = {253, 656, 140, 140};
static const sfIntRect GS_86 = {689, 839, 108, 110};
static const sfIntRect GS_87 = {407, 976, 76, 76};
static const sfIntRect GS_88 = {1326, 1, 170, 172};
static const sfIntRect GS_89 = {1913, 237, 120, 120};
static const sfIntRect GS_90 = {1746, 1602, 60, 60};
static const sfIntRect GS_91 = {1490, 1532, 60, 60};
static const sfIntRect GS_92 = {1553, 1573, 60, 60};
static const sfIntRect GS_93 = {1490, 1595, 60, 60};
static const sfIntRect GS_94 = {1616, 1616, 60, 60};
static const sfIntRect GS_95 = {1553, 1636, 60, 60};
static const sfIntRect GS_96 = {1679, 1642, 60, 60};
static const sfIntRect GS_98 = {1858, 899, 78, 80};
static const sfIntRect GS_99 = {1191, 899, 64, 180};
static const sfIntRect GS_101 = {1313, 940, 64, 180};
static const sfIntRect GS_103 = {190, 1583, 26, 24};
static const sfIntRect GS_111 = {1053, 828, 66, 170};
static const sfIntRect GS_140 = {54, 2035, 50, 10};
static const sfIntRect GS_141 = {64, 1603, 60, 60};
static const sfIntRect GS_200 = {1661, 693, 70, 88};
static const sfIntRect GS_201 = {1053, 1001, 66, 112};
static const sfIntRect GS_202 = {144, 909, 102, 112};
static const sfIntRect GS_203 = {1914, 122, 130, 112};

static const sfIntRect GS_OBJS[] = {GS_1, GS_2, GS_3, GS_4, GS_5, GS_6, GS_7,
    GS_8, GS_9, GS_10, GS_11, GS_12, GS_13,
    GS_NULL, GS_15, GS_16, GS_17, GS_18, GS_19, GS_20, GS_21, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_35, GS_36,
    GS_NULL, GS_NULL, GS_39, GS_40, GS_41,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_47, GS_48, GS_49, GS_50,
    GS_51, GS_52, GS_53, GS_54, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_60, GS_61, GS_62, GS_63, GS_64, GS_65, GS_66, GS_67, GS_68, GS_69,
    GS_70, GS_71, GS_72, GS_73, GS_74, GS_75, GS_76, GS_77,
    GS_78, GS_NULL, GS_80, GS_81, GS_82, GS_83, GS_84, GS_85, GS_86, GS_87,
    GS_88, GS_89, GS_90, GS_91, GS_92, GS_93,
    GS_94, GS_95, GS_96, GS_NULL, GS_98, GS_99, GS_NULL, GS_101, GS_NULL,
    GS_103, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_111, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_140, GS_141,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL, GS_NULL,
    GS_NULL, GS_NULL, GS_200, GS_201, GS_202, GS_203};

static const int NBR_OBJ = 204;

// Gamesheet 2
static const sfIntRect GS_PLAY_BUTTON = {0, 1306, 210, 210};
static const sfIntRect GS_LEVEL_COMPLETE = {302, 718, 752, 86};


#endif /* !GD_TEXTURE */
