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
        string s1, s2;
        cin >> s1 >> s2;

        int len1 = s1.size();
        int len2 = s2.size();
        char size1 = s1[len1 - 1], size2 = s2[len2 - 1];
        int s1x = 0, s2x = 0;
        for (int i = 0; i < len1; i++)
        {
            if (s1[i] == 'X')
            {
                s1x++;
            }
        }
        for (int i = 0; i < len2; i++)
        {
            if (s2[i] == 'X')
            {
                s2x++;
            }
        }

        if (size1 == 'S')
        {
            s1x *= -1;
        }
        if (size2 == 'S')
        {
            s2x *= -1;
        }
        if (size1 == size2)
        {
            if (s1x > s2x)
            {
                cout << ">" << endl;
            }
            if (s1x < s2x)
            {
                cout << "<" << endl;
            }
            if (s1x == s2x)
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (size1 == 'L' && (size2 == 'M' || size2 == 'S'))
            {
                cout << ">" << endl;
            }
            if (size1 == 'S' && (size2 == 'M' || size2 == 'L'))
            {
                cout << "<" << endl;
            }
            if (size1 == 'M' && size2 == 'S')
            {
                cout << ">" << endl;
            }
            if (size1 == 'M' && size2 == 'L')
            {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}