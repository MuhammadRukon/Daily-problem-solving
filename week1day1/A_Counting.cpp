#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b < a)
        cout << "0";
    else
        cout << b - a + 1;

    return 0;
}