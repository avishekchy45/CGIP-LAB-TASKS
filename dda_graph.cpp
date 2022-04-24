#include <bits/stdc++.h>
#include "graphics.h"
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    double x0, y0, xf, yf;
    cout << "First Point = ";
    cin >> x0 >> y0;
    // cout << x0 << " " << y0 << endl;
    cout << "End Point = ";
    cin >> xf >> yf;
    // cout << xf << " " << yf << endl;
    // cout << x0<< endl<< y0<< endl<< xf<< endl<< yf << endl;
    double m = (yf - y0) / (xf - x0);
    // cout<< m <<endl;
    double x = x0, y = y0;
    cout << "All the in between points are listed below:" << endl;
    if (m < 1)
    {
        for (int i = 0; x <= xf; i++)
        {
            cout << x << " " << round(y) << endl;
            x += 1, y += m;
            line(x0 * 10, y0 * 10, x * 10, y * 10);
        }
    }
    if (m > 1)
    {
        for (int i = 0; y <= yf; i++)
        {
            cout << round(x) << " " << y << endl;
            y += 1, x += (1 / m);
            line(x0 * 10, y0 * 10, x * 10, y * 10);
        }
    }
    if (m == 1)
        return 0;
    getch();
    closegraph();
}
