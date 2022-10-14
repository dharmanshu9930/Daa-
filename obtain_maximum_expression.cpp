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
        string str;
        cin >> str;
        int p = 0;
        int m = 0;
        vector<char> num;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '+')
            {
                p++;
            }
            else if (str[i] == '-')
            {
                m++;
            }
            else
            {
                num.push_back(str[i]);
            }
        }

        sort(num.begin(), num.end());

        string a = "";

        for (int j = 0; j < num.size(); j++)
        {
            if (m != 0)
            {
                a = a + num[j];
                a = a + '-';
                m--;
            }
            else if (p != 0)
            {
                a = a + num[j];
                a = a + '+';
                p--;
            }

            else
            {
                a = a + num[j];
            }
        }
        reverse(a.begin(), a.end());

        cout << a << endl;
    }

    return 0;
}
