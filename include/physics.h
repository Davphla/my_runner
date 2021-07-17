/*
** EPITECH PROJECT, 2021
** physics.h
** File description:
** Unite all type of constant physics variable
*/

#ifndef GD_PHYSICS
#define GD_PHYSICS

// // Technical // //

// FPS
#define GP_FPS 120.0

// Physics
static const double VELOCITY = (1630.0 / GP_FPS);
static const double GRAVITY = (58.5 / GP_FPS);

static const int MAX_SPEED = 50;
static const float CUBE_ROTATION = 6.2;

static const int GROUND_Y_DISP = 765;
static const int GROUND_Y = 48;

// Speed
static const float UNITS_PER_SECONDS = 359.0;
static const double SPEEDS[] = {0.7, 0.9, 1.1, 1.3};

// Rendering
static const float PIXELS_IN_BLOCK = 105.0;
static const float PIXEL_IN_UNIT = 3.5; // 1 block is 30 units
static const float PIXEL_PER_SECONDS = PIXEL_IN_UNIT * UNITS_PER_SECONDS;

static const float PIXELS_IN_HALF_BLOCK = 90.0;

// Hitboxes and Event

static const int HB_BLOCKS[] = {1, 2, 3, 4, 6, 7, 63, 69, 70, 71,
    72, 74, 75, 76, 77, 78, 81, 82, 83, 90, 91, 92, 93, 94, 95, 96};//Blocks ID
static const char NBR_BLOCKS = 26;

static const int HB_HBLOCKS[] = {40, 62, 64, 65, 66, 68}; // Half Blocks ID
static const char NBR_HBLOCKS = 6;

static const int HB_PORTALS[] = {10, 11, 12, 13, 47, 99, 101, 111};//Portals ID
static const char NBR_PORTALS = 8;

static const int HB_DEATH[] = {8, 9, 39, 61, 88, 89, 103};
static const char NBR_DEATH = 7;

#endif /* !GD_PHYSICS */
