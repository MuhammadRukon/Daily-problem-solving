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
        char at;
        cin >> n >> at;
        string s;
        cin >> s;

        s += s;
        int ans = 0;
        int lastGreen = -1;

        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                lastGreen = i;
            }

            if (i < n && s[i] == at && lastGreen != -1)
            {
                ans = max(ans, lastGreen - i);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
