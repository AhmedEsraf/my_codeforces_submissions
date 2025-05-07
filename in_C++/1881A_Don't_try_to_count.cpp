#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int size1,size2;
        cin >> size1 >> size2;

        string arr1;
        cin >> arr1;
        string arr2;
        cin >> arr2;
        int t = 0;

        while(1) {
            if (arr1.size() > 75) {
                cout << -1 << endl;
                break;
            }
            if (arr1.find(arr2) != string::npos) {
                cout << t << endl;
                break;
            }
            else {
                arr1 = arr1 + arr1;
                t++;
            }
        }

    }
    return 0;
}