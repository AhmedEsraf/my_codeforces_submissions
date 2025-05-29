#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> arr;
        vector<int> odd_count;
        int temp;
        for(int i = 0;i<n;i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        int count = 0;
        for (int x:arr){
            if (x % 2 == 1) {
                count++;
            }
        }
        if (count % 2 == 1){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}