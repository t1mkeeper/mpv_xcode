#include "osdep/macosx_application.h"
#include <stdio.h>

static char *myargv[] = {"MPV","/Users/t1mkeeper/Desktop/video-sources/01.琅琊榜.未删减.Ep20.2015.HD720P.X264.AAC.Mandarin.CHS.Mp4Ba.mp4",NULL};//must end with NULL
static int myargc = sizeof( myargv ) / sizeof( myargv[0]) - 1;

// This is needed because Cocoa absolutely requires creating the NSApplication
// singleton and running it in the "main" thread. It is apparently not
// possible to do this on a separate thread at all. It is not known how
// Apple managed this colossal fuckup.
int main(int argc, char *argv[])
{
    argc = myargc;
    argv = myargv;
    return cocoa_main(argc, argv);
}
