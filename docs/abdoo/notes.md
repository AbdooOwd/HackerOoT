# Notes

-   The First Person View Cam Func is `Camera_Subj3`
-   How a `VecGeo` works (I guess?):
    -   `r` (radius) = Z-Axis
    -   `yaw` = Y-Axis
    -   `pitch` = X-Axis
-   The devs should really fix their `new_actor.py`... It's outdated!
    -   Nevermind. It's just I didn't use it correctly.
-   Apparently, `mod_assets/` is now outdated in HackerOoT. I must use
    `assets/` instead. Dumb me confused the content of `extracted/` with `assets/`.
-   To add an assets (eg. object) to a gameplay_keep, I must make a copy
    of that gameplay_keep (only its .C and .H file) into my `assets/` directory.
    Then I include my object's .c file in gameplay_keep's .c file, and
    include my objects .h file into gameplay_keep's .h file.
    -   I have also been told that I can just include my object in
        gameplay_keep's spec. But I don't know how to do that.
-   When changing build versions (ntsc-1.0, pal-1.0, ...), I must run `make setup`.

-   When `Player_DrawImpl` is used, the game sets Link's face based on the `s32 face`
    argument. It uses the `PlayerFace` enum. In `z_player.c`, it sets Link's face
    based on `player->actor.shape.face` (which uses the enum). If we change that on 
    in `z_player` and set it to any value of the `PlayerFace` enum, Link's face stays static
    with the one we set.

-   I can't replace Link's textures by colors. I tried replacing Link's eyes
    with his skin color (to remove them completely), but it didn't work.
    Instead, I had to make a new empty 64x32 texture.
    So if I wanna do something similar, that's what I gotta do.


## Blender

-   You mean Adult Link is 7meters tall (in blender)?
-   Adult Link is (I think) 6.8meters tall in Blender (10x Actor size
    applied). So, without modifications: 0.68 meters.
-   And now it's saying Adult Link is 6.5 meters tall???


# Discoveries

-   A user asked on the Fast64 Discord server about the why
    of the camera clipping into walls when using Z-View (no target, just pressing Z for Z-Cam).
    KentonM discovered that (for some reasons), when `play->envCtx.skyboxDisabled` is `true`,
    the camera clips. (this property is also available in Blender's Fast64 when editing a scene
    with the `Disable Skybox` checkbox).


# Modifications

## Game Actors

### Player *(`z_player`)*

#### "Special Params"

Now, the player uses the params' 4-last bits *(`0xF000`)* for "special states"
(there's nothing special about them. I need another name). And this is for some
player's states like gliding. It is to control if it spawns with that state active
or not. For example, setting the first bit (from the right, of course: `0b0001`)
of the special bits makes the player spawn already gliding (makes `player->gliding` `true` 
on initialization).


## Functions

Here are the functions I modified (names, mostly):

### `func_8008F128`

Renamed to `Player_isShootingHookshot`

-   It appears to return `true` when using the hookshot (when pressing
    its action button) a.k.a shooting the hookshot.

### `func_80843E64`

Renamed to `Player_HandleLanding`.

-   It deals fall damage (or not) based on the falling-distance/height.
-   It plays sfx based on the landing.

# Idiotics

-   You mean I've been trying to implement Gliding, just to remember
    that the cucco works the **EXACT SAME** way? ... Welp.

# Thoughts / Ideas

-   Why not release two ROMs? One that uses `F3DEX3` for... whatever is better it provides,
    and another that doesn't use it (thus inteded for all emulators).
-   [23/07/2025] The HackerOoT repo has merged the decomp into its main branch.
    Now, I'm trying to fix conflicts and all to have the latest repo.
