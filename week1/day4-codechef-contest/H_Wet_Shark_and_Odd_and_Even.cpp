#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (long long i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (long long i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i];
            return 0;
        }
    }
    return 0;
}