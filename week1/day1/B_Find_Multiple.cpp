#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 1;
    while (c * i <= b)
    {
        if (c * i >= a)
        {
            cout << c * i;
            return 0;
        }
        i++;
    }
    cout << "-1";
    return 0;
}
