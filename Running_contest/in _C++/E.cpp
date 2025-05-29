#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int arrays = 1;  // at least 1 array if array not empty
        for (int i = 0; i < n - 1; i++) {
            // whenever next element is different, we can start a new array
            if (arr[i]+1 != arr[i + 1] or arr[i] != arr[i + 1]) {
                arrays++;
            }
        }

        cout << arrays << "\n";
    }
    return 0;
}
