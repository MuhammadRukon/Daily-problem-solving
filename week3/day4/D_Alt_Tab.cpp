#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    list<string> ls;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ls.remove(s);
        ls.push_front(s);
    }

    for (auto it : ls)
    {
        cout << it.substr(it.size() - 2);
    }
    cout << endl;

    return 0;
}
