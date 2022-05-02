#include <bits/stdc++.h>
#include "graphics.h"
using namespace std;
int boundary_color = RED;
bool color = true;
int boundary(int x1, int y1, int x2, int y2)
{
    setcolor(boundary_color);
    rectangle(x1, y1, x2, y2);
}
int fill(int x, int y)
{
    int fill_color;
    if (color)
        fill_color = RED;
    else
        fill_color = GREEN;
    int position = getpixel(x, y);
    if ((position != boundary_color) && (position != fill_color))
    {
        putpixel(x, y, fill_color);
        // delay(1);
        cout << x << " " << y << endl;
        fill(x + 1, y);
        fill(x - 1, y);
        fill(x, y + 1);
        fill(x, y - 1);
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    // int x1 = 250, y1 = 200, x2 = 350, y2 = 250, r = 10;
    int x1 = 150, y1 = 150, x2 = 475, y2 = 325, r = 50;
    cout << "First Coordinate of the Boundary: ";
    // cin >> x1 >> y1;
    cout << x1 << " " << y1 << endl;
    cout << "Second Coordinate of the Boundary: ";
    // cin >> x2 >> y2;
    cout << x2 << " " << y2 << endl;
    boundary(x1, y1, x2, y2);
    cout << "Radius of circle: ";
    // cin >> r;
    cout << r << endl;
    setcolor(RED);
    circle((x1 + x2) / 2, (y1 + y2) / 2, r);
    cout << "List of Filled Pixels: " << endl;
    fill((x1 + x2) / 2, (y1 + y2) / 2);
    color = false;
    fill(x1 + 1, y1 + 1);
    // fill(x2 - 1, y2 - 1);
    getch();
    closegraph();
    return 0;
}
