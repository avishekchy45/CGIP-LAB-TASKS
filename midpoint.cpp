#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    double r;
    cout << "Radius: ";
    cin >> r;
    // cout << r << endl;
    double p = 1 - r, x = 0, y = r;
    cout << "According to Mid-Point Circle Drawing Algorithm positions in first quadrant from x = 0 to x = y are:" << endl;
    while (x < y)
    {
        // cout << p << " ";
        if (p < 0)
            x += 1, p = p + 2 * x + 1;
        else
            x += 1, y -= 1, p = p + 2 * x - 2 * y + 1;
        cout << x << " " << y << endl;
    }
    return 0;
}
