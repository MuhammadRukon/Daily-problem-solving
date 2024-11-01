#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<string, string>> m;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        m.insert(make_pair(a, b));
    }
    cout << m.size() << endl;
    return 0;
}