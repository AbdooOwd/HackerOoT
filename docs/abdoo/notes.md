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


# Idiotics

-   You mean I've been trying to implement Gliding, just to remember
    that the cucco works the **EXACT SAME** way? ... Welp.
-   [23/07/2025] The HackerOoT repo has merged the decomp into its main branch.
    Now, I'm trying to fix conflicts and all to have the latest repo.