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
        string s;
        cin >> s;
        vector<int> alphabets(26, 0);
        for (int i = 0; i < n; i++)
        {
            alphabets[s[i] - 'a']++;
        }

        int oddCount = 0;
        for (int i = 0; i < 26; i++)
        {
            if (alphabets[i] % 2 == 1)
            {
                oddCount++;
            }
        }

        if ((oddCount - x) < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}