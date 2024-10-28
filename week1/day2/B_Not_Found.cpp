#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<bool> available(26, false);
    for (char c : s)
    {
        available[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!available[i])
        {
            char c = 'a' + i;
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
