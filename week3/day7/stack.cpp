#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    stack<char> stk;
    for (int i = 0; i < n; i++)
    {
        char x = s[i];
        if (x != '}' && x != ')' && x != ']')
        {
            stk.push(x);
        }
        else
        {
            if (!stk.empty())
            {
                if (x == '}' && stk.top() == '{')
                {
                    stk.pop();
                }
                else if (x == ')' && stk.top() == '(')
                {
                    stk.pop();
                }
                else if (x == ']' && stk.top() == '[')
                {
                    stk.pop();
                }
            }
        }
    }
    cout << !s.empty() << endl;

    return 0;
}