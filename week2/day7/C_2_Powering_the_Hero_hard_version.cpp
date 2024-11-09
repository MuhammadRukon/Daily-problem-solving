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
        multiset<pair<long long, long long>> powers;
        long long totalPower = 0;
        long long n;
        cin >> n;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x == 0)
            {
                if (!powers.empty())
                {
                    long long power = powers.rbegin()->first;
                    long long idx = powers.rbegin()->second;
                    totalPower += power;
                    powers.erase({power, idx});
                }
            }
            else
            {
                powers.insert({x, i});
            }
        }

        cout << totalPower << '\n';
    }

    return 0;
}