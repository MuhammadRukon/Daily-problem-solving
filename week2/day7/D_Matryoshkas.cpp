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
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int count = 1;
        int lastElement = *s.rbegin();
        s.erase(--s.end());
        while (!s.empty())
        {
            if (lastElement == *s.rbegin())
            {
                count++;
                lastElement = *s.rbegin();
                s.erase(--s.end());
            }
            else
            {
                if (lastElement - 1 == *s.rbegin())
                {
                    lastElement = *s.rbegin();
                    s.erase(--s.end());
                }
                else
                {
                    count++;
                    lastElement = *s.rbegin();
                    s.erase(--s.end());
                }
            }
        }
        cout << count << '\n';
       }

    return 0;
}