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
        vector<int> arr;
        int temp;
        for (int i = 0; i < num; i++)
        {
            cin >> temp;
            arr.push_back(temp);
            int diff = num - temp;
            cout << diff + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}