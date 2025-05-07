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
        }
        // for (auto x:arr) {
        //     cout << x << " ";
        // }
        // cout << endl;

        int max_blank = 0;
        for (int i = 0;i < num;i++) {
            int count = 0;
            for (int j = i; j < num;j++) {
                if (arr[j] == 0) {
                    count++;
                    max_blank = max(max_blank,count);
                    // cout << "count:" << count << endl;
                }
                else {
                    // cout << "max: " << max_blank << endl;
                    break;
                }
            }
        }
        cout << max_blank << endl;
    }
    return 0;
}