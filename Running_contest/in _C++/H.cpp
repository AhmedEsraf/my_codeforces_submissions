#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num, k;
        cin >> num >> k;
        int hi,lo;

        vector<int> arr(num);
        for (int i = 0; i < num; i++) {
            cin >> arr[i];
        }

        hi = *max_element(arr.begin(),arr.end());
        lo = *min_element(arr.begin(),arr.end());

        int max_count = 0;
        for (int i = 0;i < num;i++) {
            if (hi == arr[i]) {
                max_count++;
            }
            // if (max_count > 1) {
            //     break;
            // }
        }

        int total = accumulate(arr.begin(),arr.end(),0);
        if (hi - lo - 1 > k) {
            cout << "Jerry" << endl;
        }
        else if (hi - lo > k and max_count > 1) {
            cout << "Jerry" << endl;
        }
        else {
            if (total % 2 == 0 ) {
                cout << "Jerry" << endl;
            }
            else {
                cout << "Tom" << endl;
            }
        }
    }

    return 0;
}
