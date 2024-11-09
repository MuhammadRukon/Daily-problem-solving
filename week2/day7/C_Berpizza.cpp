#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> ans;
    int serial = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)

        {
            int price;
            cin >> price;
            s.insert({serial, price});
            ms.insert({price, -serial});
            serial++;
        }
        else if (type == 2)
        {

            ans.push_back(s.begin()->first);
            ms.erase({s.begin()->second, -s.begin()->first});
            s.erase(s.begin());
        }
        else
        {

            int pos = -ms.rbegin()->second;
            int price = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, price});
        }
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << '\n';
    return 0;
}