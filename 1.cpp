#include "graphics.h"
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    getch();
    closegraph();
    return 0;
}
