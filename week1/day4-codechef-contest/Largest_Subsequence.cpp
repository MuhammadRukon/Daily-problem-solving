#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> a(2, 0);
        int n;
        cin >> n;
        string b;
        cin >> b;
        int occur = 1;
        int curr = b[0] - 'a';
        for (int i = 1; i < n; i++)
        {
            if (b[i] - 'a' <= curr)
            {
                occur++;
            }
            else
            {
                a[curr] = max(a[curr], occur);
                occur = 1;
                curr = b[i] - 'a';
            }
        }
        a[curr] = max(a[curr], occur);

        cout << max(a[0], a[1]) << endl;
    }

    return 0;
}