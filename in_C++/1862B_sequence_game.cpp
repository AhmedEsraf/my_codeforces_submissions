#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        vector<int> list;
        int ele;

        for (int i = 0; i < num; i++)
        {
            cin >> ele;
            list.push_back(ele);
        }
        vector<int> og;
        og.push_back(list[0]);
        for (int i = 1; i < num; i++)
        {
            if (list[i] < list[i - 1])
            {
                og.push_back(list[i]);
            }
            og.push_back(list[i]);
        }
        cout << og.size() << endl;
        for (int i = 0; i < og.size(); i++)
        {
            cout << og[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
