#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num,max;
        cin >> num >> max;

        int arr[num];
        for (int i = 0;i < num;i++) {
            cin >> arr[i];
        }
        int status = 0;
        if(is_sorted(arr,arr+num)) {
            status = 1;
        }
        if (status == 1) {
            cout <<  "YES" << endl;
        }
        else if (max >= 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}