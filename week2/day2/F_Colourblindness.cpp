#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        bool identical = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R' && s2[i] != 'R' || s1[i] != 'R' && s2[i] == 'R')
            {
                identical = false;
                break;
            }
        }
        identical ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}