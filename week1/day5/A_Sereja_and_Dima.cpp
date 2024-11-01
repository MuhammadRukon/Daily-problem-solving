#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = n - 1;
    int sereja = 0, dima = 0;
    bool serejasTurn = true;

    while (i <= j)
    {
        int maxNum;
        (a[i] > a[j]) ? maxNum = a[i++] : maxNum = a[j--];

        serejasTurn ? sereja += maxNum : dima += maxNum;

        serejasTurn = !serejasTurn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}