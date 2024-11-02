#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;

        set<char> uniqueChars(b.begin(), b.end());
        vector<char> copy(uniqueChars.begin(), uniqueChars.end());
        vector<char> reversedCopy = copy;
        reverse(reversedCopy.begin(), reversedCopy.end());

        map<char, char> decodeMap;
        int length = copy.size();
        for (int i = 0; i < length; i++)
        {
            decodeMap[copy[i]] = reversedCopy[i];
        }
        string s;
        for (char c : b)
        {
            s += decodeMap[c];
        }

        cout << s << endl;
    }

    return 0;
}
