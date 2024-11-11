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
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (n <= 3)
        {
            cout << "0\n";
            continue;
        }

        int option1 = v[n - 3] - v[0];
        int option2 = v[n - 1] - v[2];
        int option3 = v[n - 2] - v[1];

        cout << min(option1, min(option2, option3)) << "\n";
    }

    return 0;
}
