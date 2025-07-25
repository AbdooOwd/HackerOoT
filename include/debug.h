#ifndef HACKEROOT_DEBUG_H
#define HACKEROOT_DEBUG_H

#include "config.h"
#include "ultra64.h"
#include "padmgr.h"
#include "debug/print.h"
#include "debug/collision_view.h"
#include "debug/menu.h"
#include "debug/profiler.h"
#include "z_math.h"

#define DEBUG_PRINT_VAR(var) PRINTF("%s: %d\n", #var, var)

#define PRINT_SCREEN(x, y, text, ...) \
    Print_Screen(&gDebug.printer, (x), (y), COLOR_WHITE, (text), ##__VA_ARGS__)

#define COLOR_WHITE (0xFFFFFF)
#define COLOR_RED (0xFF0000)
#define COLOR_GREEN (0x00FF00)
#define COLOR_BLUE (0x0000FF)
#define COLOR_BLUE2 (0x0080FF)
#define COLOR_BLUE3 (0x00BFFF)

typedef struct Debug {
    struct PlayState* play;
    Input* input;
    PrintUtils printer;
    Menu menu;
} Debug;

void Debug_DrawColorRectangle(Vec2s rectLeft, Vec2s rectRight, Color_RGBA8 rgba);
void Debug_ConfigureNewRectangle(Input* controller);

extern Debug gDebug;

#endif
