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
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + num);
        vector<int> b;
        vector<int> c;
        b.push_back(arr[0]);

        for (int i = 1; i < num; i++)
        {
            if (arr[i] == arr[0])
            {
                b.push_back(arr[i]);
            }
            else
            {
                c.push_back(arr[i]);
            }
        }
        if (b.size() == 0 or c.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            for (int y : c)
            {
                cout << y << " ";
            }
            cout << endl;
        }
    }
    return 0;
}