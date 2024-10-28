#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int digit = 4;
    string s = "0000";
    int i = 3;
    while (n)
    {
        char c = n % 10 + '0';
        s[i] = c;
        n /= 10;
        i--;
    }
    cout << s;

    return 0;
}