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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int i = 0;
        int j = v.size() - 1;
        int count = 0;
        set<int> m;
        while (i < j)
        {
            if (m.count(v[i]))
            {
                count++;
            }
            if (v[i] == v[j])
            {

                count++;
                i++;
            }
            else
            {
                m.insert(v[j]);
                j--;
            }
        }
        if (n % 2 != 0 && m.count(v[i]))
        {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}