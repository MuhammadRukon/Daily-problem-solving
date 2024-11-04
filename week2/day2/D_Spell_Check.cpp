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
        string s;
        cin >> s;
        string s2 = "Timur";

        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            sort(s2.begin(), s2.end());
            s == s2 ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}