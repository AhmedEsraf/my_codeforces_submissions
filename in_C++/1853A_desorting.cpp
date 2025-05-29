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
        vector<int> arr(num);
        for (auto &x : arr)
        {
            cin >> x;
        }

        if (is_sorted(arr.begin(),arr.end()))
        {
            int diff = arr[1]-arr[0];
            for (int i = 2;i < num;i++) {
                if ((arr[i]-arr[i-1]) < diff) {
                 diff = (arr[i]-arr[i-1]);
                }
            }
            diff++;
            if  (diff % 2 == 1) {
                diff++;
                cout << diff/2 << endl;
            }
            else {
                cout << diff/2 << endl;
            }
        }
        else {
            cout << 0 << endl;
        }

    }
    return 0;
}