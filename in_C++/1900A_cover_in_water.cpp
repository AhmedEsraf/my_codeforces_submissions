#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        string str;
        cin >> str;
        int min = 0;

        for (int i = 2; i < num; i++)
        {
            if (str[i] == '.' and str[i - 1] == '.' and str[i - 2] == '.')
            {
                min = 2;
            }
        }
        if (min < 2)
        {

            for (int i = 0; i < num; i++)
            {
                if (str[i] == '.') {
                    min= min +1;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}