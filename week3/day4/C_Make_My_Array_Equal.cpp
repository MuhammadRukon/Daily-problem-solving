#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = false;
        bool flagInside = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0, j = n - 1;
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int k = 0; k < n - 1; k++)
            {
                if (v[k] != v[k + 1])
                {
                    flag = true;
                }
            }
            if (flag)
            {
                while (i < j)
                {
                    if (v[i] != v[j])
                    {
                        if (v[i] > v[j])
                        {
                            v[j] = v[i] + v[j];
                        }
                        else
                        {
                            v[i] = v[i] + v[j];
                        }
                    }
                    i++;
                    j--;
                }

                if (j - 1 >= 0)
                {
                    v[i] = v[i] + v[j - 1];
                }
                else if (j + 1 < n)
                {
                    v[i] = v[i] + v[j + 1];
                }
                for (int k = 0; k < n - 1; k++)
                {
                    if (v[k] != v[k + 1])
                    {
                        flagInside = true;
                    }
                }
                if (flagInside)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}