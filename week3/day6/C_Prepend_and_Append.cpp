#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int i = 0;
        int j = n - 1;
        int count = n;
        while (i <= j)
        {
            if (s[i] == s[j])
            {
                break;
            }
            else
            {
                count -= 2;
                i++;
                j--;
            }
        }
        cout << count << endl;
    }

    return 0;
}