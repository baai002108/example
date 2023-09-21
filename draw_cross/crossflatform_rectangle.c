#include <stdio.h>
#include "crossflatform_rectangle.h"

#ifdef WINDOWS
    #include "rectangle_for_windows.h"
#elif UNIX
    #include "rectangle_for_unix.h"
#endif

void draw_crossflatform_rectangle() {
    #ifdef WINDOWS
    printf("windows");
    w_draw_rectangle();
    return;
    #elif UNIX
    printf("unix");
    u_draw_rectangle();
    return;
    #endif
    printf("no platform");
    return;
}