#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num,k;
        cin >> num >> k;

        if (num % 2 == 1 and k % 2 == 0) {
            cout << "NO" << endl;
        }
        else if (num == k) {
            cout << "Yes" << endl;
        }
        else if (num % 2 ==0) {
            cout << "YES" << endl;
        }
        else if ( num % 2 == 1 and k % 2 == 1) {
            cout << "YEs" << endl;
        }
    }
    return 0;
}