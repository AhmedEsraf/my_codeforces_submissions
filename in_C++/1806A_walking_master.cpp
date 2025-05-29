#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a , b , c , d;
        cin >> a >> b >> c >> d;

        int count = 0;
        if (b > d) {
            cout << -1 << endl;
            continue;
        }
        int vert = d - b;
        for (int i = 0;i < vert;i++) {
            a++;
            b++;
            count++;
        }
        if (c > a) {
            cout << -1 << endl;
            continue;
        }
        else if (c < a) {
            count = count + (a-c);
        }
        cout << count << endl;
    }
    return 0;
}