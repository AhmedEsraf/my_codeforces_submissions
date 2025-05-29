#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;

        int arr[num];
        int sum = 0;

        for (int i = 0; i < num-1;i++) {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        sum = -(sum);
        cout << sum << endl;
    }
    return 0;
}