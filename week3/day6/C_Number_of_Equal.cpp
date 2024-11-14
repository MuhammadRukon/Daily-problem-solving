#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int i = 0, j = 0;
    long long count = 0;
    while (i < n && j < m)
    {
        int curr = v1[i], cnt1 = 0, cnt2 = 0;
        while (i < n && v1[i] == curr)
        {
            cnt1++;
            i++;
        }
        while (j < m && v2[j] < curr)
        {

            j++;
        }
        while (j < m && v2[j] == curr)
        {
            cnt2++;
            j++;
        }
        count += (1ll * cnt1 * cnt2);
    }
    cout << count << endl;
    return 0;
}