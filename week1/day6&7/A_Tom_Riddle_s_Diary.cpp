#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> possession;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (possession.count(name))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            possession.insert(name);
        }
    }

    return 0;
}
