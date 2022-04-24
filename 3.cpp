#include "graphics.h"
#include <stdio.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setcolor(RED);
    circle(100, 100, 50);
    setcolor(GREEN);
    circle(200, 200, 100);
    getch();
    closegraph();
    return 0;
}
