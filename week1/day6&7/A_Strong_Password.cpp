#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string bestPassword = s;
        bool inserted = false;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {

                char insertChar = 'a';

                while (insertChar == s[i] || (i + 2 < s.size() && insertChar == s[i + 2]))
                {
                    insertChar++;
                }

                bestPassword = s.substr(0, i + 1) + insertChar + s.substr(i + 1);
                inserted = true;
                break;
            }
        }

        if (!inserted)
        {
            char insertChar = 'a';
            if (s.back() == 'a')
                insertChar = 'b';
            bestPassword += insertChar;
        }

        cout << bestPassword << endl;
    }

    return 0;
}
