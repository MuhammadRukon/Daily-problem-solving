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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeroes = 0;
        int ones = 0;
        int i = 0;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (s[0] == '1')
                ones++;
            else
                zeroes++;

            for (int i = 1; i < n; i++)
            {
                if (s[i] != s[i - 1])
                {
                    if (s[i] == '1')
                        ones++;
                    else
                        zeroes++;
                }
            }
            cout << min(zeroes, ones) << endl;
        }

        // while (i < n - 1)
        // {
        //     if (s[i] == '1' && s[i + 1] == '0')
        //     {
        //         ones++;
        //     }
        //     else
        //     {
        //         if (s[i + 1] == '1')
        //         {
        //             zeroes++;
        //         }
        //     }
        //     i++;
        // }
    }

    return 0;
}
