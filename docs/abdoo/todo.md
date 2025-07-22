# TODO

-   Make C-Up view not lerp back to the original cam position.
    When the player moves the view with his joystick, the view
    should stay as the player left it (kind of like Indigo).

-   Make player glide like BotW
    -   If I keep A pressed when jumping of an edge, Link's gravity
        doesn't stop him from infinitely jumping (he thus flies upwards).
        To prevent this, I should wait a few frames before activating
        the glide. To do that, I'll save the frame in which Link jumped
        (by checking the flag `BGCHECK_FLAG_GROUND_LEAVE`), then wait a certain
        amount of frames (probably some kind of timer variable which works with
        frames and not seconds), then finally allow the player to trigger gliding.
        For that, maybe adding some kind of `jumpGlideTimer == 0` (it would be an unsigned
        integer sooo I don't need the `<=` operator).
    -   I want to be able to spawn the player gliding. I must check which param's
        values aren't used so I can spawn Link gliding using his params.
    -   Add the glider as an actor to be spawned above Link's head.