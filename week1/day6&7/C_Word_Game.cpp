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

        vector<string> words1(n);
        vector<string> words2(n);
        vector<string> words3(n);

        for (int i = 0; i < n; i++)
        {
            cin >> words1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> words2[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> words3[i];
        }

        map<string, int> wordCount;
        for (const auto &word : words1)
            wordCount[word]++;
        for (const auto &word : words2)
            wordCount[word]++;
        for (const auto &word : words3)
            wordCount[word]++;

        int point1 = 0, point2 = 0, point3 = 0;

        for (const auto &word : words1)
        {
            if (wordCount[word] == 1)
                point1 += 3;
            else if (wordCount[word] == 2)
                point1 += 1;
        }

        for (const auto &word : words2)
        {
            if (wordCount[word] == 1)
                point2 += 3;
            else if (wordCount[word] == 2)
                point2 += 1;
        }

        for (const auto &word : words3)
        {
            if (wordCount[word] == 1)
                point3 += 3;
            else if (wordCount[word] == 2)
                point3 += 1;
        }

        cout << point1 << " " << point2 << " " << point3 << endl;
    }

    return 0;
}
