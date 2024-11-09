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
        map<int, int> occurence;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            occurence[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : occurence)
            pq.push(y);

        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--;
            y--;
            if (x >= 1)
            {
                pq.push(x);
            }
            if (y >= 1)
            {
                pq.push(y);
            }
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }

    return 0;
}
