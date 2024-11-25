#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {

            cout << "NO" << endl;
        }

        else
        {
            int count = 0;
            string s;
            while (n--)
            {
                if (count % 2 != 0)
                {
                    s.push_back('A');
                    s.push_back('A');
                    s.push_back('A');
                    count++;
                }
            }
        }
    }

    return 0;
}
