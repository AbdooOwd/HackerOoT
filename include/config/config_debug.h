#ifndef CONFIG_DEBUG_H
#define CONFIG_DEBUG_H

/******************
 * DEBUG SETTINGS *
 ******************/

/**
 * All settings here will only be applied if DEBUG_ROM is defined.
 * See the Makefile to toggle this on or off.
 */

/**
 * Enables HackerOoT debugger
*/
#define ENABLE_HACKER_DEBUG true

/**
 * Enables HackerOoT profiler. By default only an FPS counter is shown; the
 * default behavior can be changed near the top of src/debug/profiler.c. The
 * main profiler modes can be selected using the debug menu. If you remove the
 * debug menu for a release version of your romhack, you can consider setting
 * this to false to save a small amount of CPU time and memory for logging
 * events.
 */
#define ENABLE_PROFILER true

/**
 * Options for booting directly into a scene, the debug boot or the file select, instead of the title screen.
 */
#define BOOT_TO_SCENE false
#define BOOT_TO_SCENE_NEW_GAME_ONLY false
#define BOOT_TO_FILE_SELECT false
#define BOOT_TO_DEBUG_OPENING true

/**
 * Use file 1 to load the map select from the file select
 * Note: using this will automatically enable the map select
*/
#define MAP_SELECT_ON_FILE_1 false

// Change these if using `BOOT_TO_SCENE`, `BOOT_TO_SCENE_NEW_GAME_ONLY` or `BOOT_TO_DEBUG_OPENING`
#define BOOT_ENTRANCE ENTR_EXAMPLE_0
#define BOOT_AGE LINK_AGE_ADULT
#define BOOT_CUTSCENE 0x0000

// Change these if using `BOOT_TO_SCENE` or `BOOT_TO_SCENE_NEW_GAME_ONLY`
#define BOOT_TIME NEXT_TIME_DAY
// #define BOOT_PLAYER_NAME 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E // "LINK"

/**
 * Enable/Disable BGM on Map Select
 * Comment this to disable BGM
 */
#define MAP_SELECT_BGM NA_BGM_OWL

/**
 * Fix a crash if you spawn in a grotto without using the grotto actor
 */
// #define FIX_GROTTO_CRASH false

/**
 * Disable autoscroll on crash debugger
*/
#define DISABLE_CRASH_DBG_AUTOSCROLL true

/**
 * Enable DMA print at boot
*/
#define ENABLE_DMA_PRINTF false

/**
 * Include example scene
*/
#define INCLUDE_EXAMPLE_SCENE true

/**
 * Enable motion blur debug
*/
#define ENABLE_MOTION_BLUR_DEBUG false

/**
 * Enable debug boot menu
 */
#define ENABLE_DEBUG_BOOT true


// Debug Save Options

#define DBGSAVE_HEALTH_CAPACITY 0x10 * 5

#endif
