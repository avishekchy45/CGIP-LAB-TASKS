#include <bits/stdc++.h>
#define ll long long int
#include "graphics.h"
using namespace std;
bool col = false;
int draw(double x0, double y0, double x, double y)
{
    if (col)
        setcolor(GREEN);
    else
        setcolor(RED);
    line(x0, y0, x, y);
    col = !col;
}
int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    double x0, y0, xf, yf;
    cout << "Starting Point : ";
    cin >> x0 >> y0;
    cout << x0 << " " << y0 << endl;
    cout << "Ending Point : ";
    cin >> xf >> yf;
    cout << xf << " " << yf << endl;
    if (x0 > xf || y0 > yf)
    {
        x0 = x0 + xf, xf = x0 - xf, x0 = x0 - xf;
        y0 = y0 + yf, yf = y0 - yf, y0 = y0 - yf;
    }
    double dy = yf - y0, dx = xf - x0;
    double m = dy / dx;
    // cout<< m <<endl;
    double p = (2 * dy) - dx;
    double x = x0, y = y0;
    cout << "Colored Pixel using Bresenham Line Drawing Algorithm:" << endl;
    if (m > 0 && m < 1)
    {
        for (ll i = 0, k = 0; x < xf; i++)
        {
            if (p < 0)
            {
                x += 1;
                cout << x << " " << y << endl;
                draw(x0, y0, x, y);
                x0 = x, y0 = y;
                k += 1, p = p + (2 * dy);
            }
            else
            {
                x += 1, y += 1;
                cout << x << " " << y << endl;
                draw(x0, y0, x, y);
                x0 = x, y0 = y;
                k += 1, p = p + (2 * dy) - (2 * dx);
            }
        }
    }
    else
        cout << "Given Points are Invalid." << endl;
    getch();
    closegraph();
    return 0;
}
