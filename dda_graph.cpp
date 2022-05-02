#include <bits/stdc++.h>
#define ll long long int
#include "graphics.h"
using namespace std;
bool col = false;
int draw(double x0, double y0, double x, double y)
{
    if (col)
        setcolor(RED);
    else
        setcolor(GREEN);
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
    cout << "Starting Point = ";
    cin >> x0 >> y0;
    cout << x0 << " " << y0 << endl;
    cout << "Ending Point = ";
    cin >> xf >> yf;
    cout << xf << " " << yf << endl;
    double m = (yf - y0) / (xf - x0);
    // cout<< m <<endl;
    double x = x0, y = y0;
    cout << "Colored Pixel using DDA Line Drawing Algorithm:" << endl;
    if (m < 1)
    {
        for (ll i = 0; x <= xf; i++)
        {
            cout << x << " " << round(y) << endl;
            x += 1, y += m;
            draw(x0, y0, x, y);
            x0 = x, y0 = y;
        }
    }
    if (m > 1)
    {
        for (ll i = 0; y <= yf; i++)
        {
            cout << round(x) << " " << y << endl;
            y += 1, x += (1 / m);
            draw(x0, y0, x, y);
            x0 = x, y0 = y;
        }
    }
    if (m == 1)
    {
        for (ll i = 0; x <= xf; i++)
        {
            cout << x << " " << y << endl;
            x += 1, y += 1;
        }
        draw(x0, y0, xf, yf);
    }
    getch();
    closegraph();
    return 0;
}
