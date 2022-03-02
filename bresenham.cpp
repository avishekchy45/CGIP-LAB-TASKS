#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    double x0, y0, xf, yf;
    cout << "First Point : ";
    cin >> x0 >> y0;
    cout << x0 << " " << y0 << endl;
    cout << "End Point : ";
    cin >> xf >> yf;
    cout << xf << " " << yf << endl;
    if (x0 > xf || y0 > yf)
    {
        x0 = x0 + xf, xf = x0 - xf, x0 = x0 - xf;
        y0 = y0 + yf, yf = y0 - yf, y0 = y0 - yf;
    }
    // cout << x0 << endl<< y0 << endl<< xf << endl<< yf << endl;
    double dy = yf - y0, dx = xf - x0;
    double m = dy / dx;
    // cout<< m <<endl;
    double p = (2 * dy) - dx;
    double x = x0, y = y0;
    cout << "According to Bresenham Line Drawing Algorithm other points are:" << endl;
    if (m > 0 && m < 1)
    {
        for (ll i = 0, k = 0; x < xf; i++)
        {
            if (p < 0)
            {
                x += 1;
                cout << x << " " << y << endl;
                k += 1, p = p + (2 * dy);
            }
            else
            {
                x += 1, y += 1;
                cout << x << " " << y << endl;
                k += 1, p = p + (2 * dy) - (2 * dx);
            }
        }
    }
    else
        cout << "Given Points are Invalid." << endl;
    return 0;
}
