#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int coin = 0;
        for (int i = 1; i <= n - x; i++)
        {

            coin -= pow(2, i);
        }

        while (x--)
        {
            coin += pow(2, n);
            n--;
        }
        cout << coin << endl;
    }

    return 0;
}
