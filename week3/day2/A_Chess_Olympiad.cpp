#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float wins, draws, losses;
    cin >> wins >> draws >> losses;
    int matchesLeft = 4 - (wins + draws + losses);
    draws *= 0.5;

    (matchesLeft + wins + draws >= 2.5) ? cout << "Yes" : cout << "No";

    return 0;
}