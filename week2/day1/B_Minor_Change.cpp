#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    // cout << s << endl;
    // cout << t << endl;
    long long int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}