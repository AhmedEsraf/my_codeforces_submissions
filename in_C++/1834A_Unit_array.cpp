#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt_neg1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) cnt_neg1++;
        }

        int ops = 0;
        int sum = n - 2 * cnt_neg1;

       
        while (sum < 0) {
            sum += 2;
            cnt_neg1--; 
            ops++;
        }

        
        if (cnt_neg1 % 2 == 1) {
            ops++;
        }

        cout << ops << "\n";
    }
    return 0;
}
