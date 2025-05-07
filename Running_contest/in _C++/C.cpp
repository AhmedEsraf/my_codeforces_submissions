#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0' && t[i] == '1') {
                valid = false;  // Can't convert 0 to 1
                break;
            }
        }

        if (!valid) {
            cout << "NO\n";
            continue;
        }

        int count1_s = count(s.begin(), s.end(), '1');
        int count1_t = count(t.begin(), t.end(), '1');

        if ((count1_s - count1_t) % 2 == 0 && count1_s >= count1_t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
