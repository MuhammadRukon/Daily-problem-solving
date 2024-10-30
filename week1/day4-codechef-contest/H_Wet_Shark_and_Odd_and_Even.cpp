#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n);
    long long totalSum = 0;
    long long minOdd = LLONG_MAX;

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        totalSum += a[i];

        if (a[i] % 2 != 0)
            minOdd = min(minOdd, a[i]);
    }

    if (totalSum % 2 == 0)
        cout << totalSum << endl;

    else
    {

        if (minOdd != LLONG_MAX)
            cout << totalSum - minOdd << endl;

        else
            cout << 0 << endl;
    }

    return 0;
}
