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
        char a[n];
        int firstBlack = -1;
        int lastBlack = -1;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            a[i] = c;
            if (c == 'B' && firstBlack == -1)
                firstBlack = i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'B')
            {
                lastBlack = i;
                break;
            }
        }
        cout << lastBlack - firstBlack + 1 << endl;
    }

    return 0;
}