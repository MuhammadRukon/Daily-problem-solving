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
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty())
                return false;
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
                else
                {
                    cout << "0" << endl;
                    return 0;
                }
            }
            else
            {
                cout << "0" << endl;
                return 0;
            }
        }
    }
    cout << stk.empty();
    return 0;
}