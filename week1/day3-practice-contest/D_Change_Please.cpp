#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int left = 100 - n;
        cout << left / 10 * 10 << endl;
    }

    return 0;
}