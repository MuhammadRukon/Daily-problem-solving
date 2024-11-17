#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (n - m >= 18)
    {
        cout << "RCB";
    }
    else
    {
        cout << "CSK";
    }

    return 0;
}