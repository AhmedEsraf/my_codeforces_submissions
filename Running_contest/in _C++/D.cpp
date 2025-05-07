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
        int count = 0;

        int len = str.size();
        string arr[len];
        for (int i = 0; i < len; i++)
        {
            string dup = str;
            arr[i] == dup;
            if (dup[i] == '1')
            {
                dup[i] = '0';
            }
            else
            {
                dup[i] = '1';
            }
            arr[i] = dup;
            for (int j = 0; j < num; j++)
            {
                if (arr[i][j] == '1')
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}