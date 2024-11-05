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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            int no;
            string str;
            cin >> no >> str;

            int sum = 0;
            for (char move : str)
                (move == 'U') ? sum-- : sum++;

            v[i] = (v[i] + sum + 10) % 10;
        }

        for (int i : v)
        {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}
