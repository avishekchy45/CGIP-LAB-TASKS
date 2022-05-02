#include <bits/stdc++.h>
#define ll long long int
#include "graphics.h"
using namespace std;
int draw(double x0, double y0, double r)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setcolor(GREEN);
    circle(x0, y0, r);
    getch();
    closegraph();
}
int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    double x0, y0, r;
    cout << "Center Point: ";
    cin >> x0 >> y0;
    cout << x0 << " " << y0 << endl;
    cout << "Radius: ";
    cin >> r;
    cout << r << endl;
    double p = 1 - r, x = 0, y = r;
    cout << "According to Mid-Point Circle Drawing Algorithm positions in first quadrant from x = 0 to x = y are:" << endl;
    while (x < y)
    {
        // cout << p << " ";
        if (p < 0)
            x += 1, p = p + 2 * x + 1;
        else
            x += 1, y -= 1, p = p + 2 * x - 2 * y + 1;
        cout << x + x0 << " " << y + y0 << endl;
    }
    draw(x0, y0, r);
    return 0;
}
