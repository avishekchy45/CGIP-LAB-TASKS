#include "graphics.h"
#include <stdio.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;
    initgraph(&gd, &gm, NULL);
    setcolor(GREEN);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
