# TODO

-   Make C-Up view not lerp back to the original cam position.
    When the player moves the view with his joystick, the view
    should stay as the player left it (kind of like Indigo).

## Gliding [ ]

-   If I keep A pressed when jumping of an edge, Link's gravity
    doesn't stop him from infinitely jumping (he thus flies upwards).
    To prevent this, I should wait a few frames before activating
    the glide. To do that, I'll save the frame in which Link jumped
    (by checking the flag `BGCHECK_FLAG_GROUND_LEAVE`), then wait a certain
    amount of frames (probably some kind of timer variable which works with
    frames and not seconds), then finally allow the player to trigger gliding.
    For that, maybe adding some kind of `jumpGlideTimer == 0` (it would be an unsigned
    integer sooo I don't need the `<=` operator).
    -   Nevermind. Using `minVelocityY` instead of `gravity` fixes this. [x]

-   I want to be able to spawn the player gliding. I must check which param's
    values aren't used so I can spawn Link gliding using his params. [x?]
-   Add the glider as an actor to be spawned above Link's head. [x]
-   Make the movements while Gliding more free.
-   Add Link gliding animation.
-   Maybe I should mark Link as "carrying an actor", where this actor
    is the glider?

-   Remove Link's face
    - Removed his eyes [X]

## New Link Hurting [X]

-   Instead of constantly *beeping* on the player when Health is low,
    we either make it an option (disable/enable), **OR** we implement it in...
    "another way"...
-   If we forget about the "option disable enable thingy for critical beeping",
    we're left with the "other way": **Breath of the Wild's Critical Notifier!!!**
-   In Breath of the Wild, when the player's health become critical, the player
    is notified that he has "entered the danger zone" (in terms of health).
    But this sound only plays once (iirc)!
-   We still need to keep the player aware about his critical health.
    So the games makes the player's body *\*beep\** with red.
    -   The sound is really annoying, but a visual notifier might not be
        as annoying!
-   No flickering! Red -> transparent


## Hmm?
-   I really gotta see why F3DEX3 is so cool...
-   I also REALLY should check if decomp is better...
    
