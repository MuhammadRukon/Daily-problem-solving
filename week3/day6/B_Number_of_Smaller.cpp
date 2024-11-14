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
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int i = 0, j = 0;
    int count = 0;
    while (j <= n)
    {
        if (i < n && v1[i] < v2[j])
        {
            count++;
            i++;
        }
        else
        {
            cout << count << " ";
            j++;
        }
    }

    return 0;
}