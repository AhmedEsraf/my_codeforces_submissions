#include <bits/stdc++.h>
#include <algorithm>
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
        int arr[num];

        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        map <int,int> freq;
        set<int> unique;
        for (int i = 0;i < num;i++) {
            unique.insert(arr[i]);
        }
        for (int ele: arr) {
            freq[ele]++;
        }

        int not_possible = 0;
        if (unique.size() == 1 ) {
            cout << "YES" << endl;
        }

        else if (unique.size() == 2)
        {
            for (auto fr: freq) {
                if (fr.second < (num/2)) {
                    not_possible = 1;
                }
            }
            if (not_possible == 1) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}