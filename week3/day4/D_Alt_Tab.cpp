#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = i + 1;
    }
    vector<pair<string, int>> v;
    for (auto it : m)
    {
        v.push_back({it.first, it.second});
    }

    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first.substr(it.first.size() - 2);
    }
    return 0;
}
