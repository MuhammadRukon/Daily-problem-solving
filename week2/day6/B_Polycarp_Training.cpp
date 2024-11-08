#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    multiset<int> set;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        set.insert(x);
    }
    int i = 1;
    int ans = 0;
    while (i <= n)
    {
        auto it = set.lower_bound(i);
        if (it != set.end())
        {
            ans++;
            set.erase(it);
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}