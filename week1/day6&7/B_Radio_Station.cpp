#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> stations;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        stations[ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        string name, ip2;
        cin >> name >> ip2;

        string ip = ip2.substr(0, ip2.size() - 1);

        cout << name << " " << ip2 << " #" << stations[ip] << endl;
    }

    return 0;
}