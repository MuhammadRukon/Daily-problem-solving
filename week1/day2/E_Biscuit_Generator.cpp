#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    t += 0.5;
    int i = a;
    int biscuits = 0;
    while (i <= t)
    {
        biscuits += b;
        i += a;
    }
    cout << biscuits;
    return 0;
}