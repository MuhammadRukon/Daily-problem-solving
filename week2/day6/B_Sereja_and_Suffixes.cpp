#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    set<int> s;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        ans[i] = s.size();
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << ans[x - 1] << endl;
    }
    return 0;
}