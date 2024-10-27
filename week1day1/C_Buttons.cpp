#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a + b;
    }
    else
    {
        int i = 2;
        int sum = 0;
        while (i--)
        {
            if (b < a)
            {
                sum += a;
                a--;
            }
            else if (b > a)
            {
                sum += b;
                b--;
            }
            else
            {
                sum += b;
                b--;
            }
        }
        cout << sum;
    }

    return 0;
}