#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {

            cout << "NO" << endl;
        }

        else
        {
            int count = 0;
            string s;
            while (count < n)
            {
                if (count + 2 <= n)
                {
                    s.push_back('A');
                    s.push_back('A');
                    s.push_back('A');
                    s.push_back('B');
                    count += 2;
                }
                else
                {
                    break;
                }
            }

            if (count < n)
            {
                s.push_back('A');
                s.push_back('A');
                count++;
            }

            cout << "YES\n";
            cout << s << endl;
        }
    }

    return 0;
}