# Notes

-   The First Person View Cam Func is `Camera_Subj3`
-   How a `VecGeo` works (I guess?):
    -   `r` (radius) = Z-Axis
    -   `yaw` = Y-Axis
    -   `pitch` = X-Axis


## Blender

-   You mean Adult Link is 7meters tall (in blender)?
-   Adult Link is (I think) 6.8meters tall in Blender (10x Actor size
    applied). So, without modifications: 0.68 meters.



# Discoveries

-   A user asked on the Fast64 Discord server about the why
    of the camera clipping into walls when using Z-View (no target, just pressing Z for Z-Cam).
    KentonM discovered that (for some reasons), when `play->envCtx.skyboxDisabled` is `true`,
    the camera clips. (this property is also available in Blender's Fast64 when editing a scene
    with the `Disable Skybox` checkbox).


# Modifications

Here are the functions I modified (names, mostly):

## `func_8008F128`

Renamed to `Player_isShootingHookshot`

-   It appears to return `true` when using the hookshot (when pressing
    its action button) a.k.a shooting the hookshot.