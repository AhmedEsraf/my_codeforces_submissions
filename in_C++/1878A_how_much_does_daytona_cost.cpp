#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num,target;
        cin >> num >> target;\
        int status = 0;

        int arr[num];
        for (int i= 0;i < num; i++) {
            cin >> arr[i];
            if (arr[i] == target) {
                status = 1;
            }
        }
        if (status == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}