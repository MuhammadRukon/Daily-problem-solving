#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> ans;
        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++)
        {
            ans.push_back(i + 1);
        }
        long long i = n - 1;
        long long j = i - 1;

        while (j != 0)
        {
            long long last = ans[i];
            long long secondLast = ans[j];

            if ((last + secondLast) % 2 != 0)
            {
                secondLast = ans[--j];
            }
            v.push_back({secondLast, last});
            long long x = (last + secondLast) / 2;
            ans[j] = x;
            ans.pop_back();
            i--;
            j = i - 1;
        }

        v.push_back({ans[1], ans[0]});
        cout << ans[1] - ans[0] << "\n";
        for (auto val : v)
        {
            cout << val.first << " " << val.second << "\n";
        }
    }
    return 0;
}