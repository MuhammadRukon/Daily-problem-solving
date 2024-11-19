#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        while (x >= 3)
        {
            x -= 3;
        }
        while (y >= 3)
        {
            y -= 3;
        }
        cout << x << endl;
       }
    return 0;
}