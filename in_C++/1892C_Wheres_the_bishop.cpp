#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << endl << endl;
        vector<string> num(8);
        for (int i = 0;i < 8;i++) {
            cin >> num[i];
        }
        for (int i = 0;i < 8;i++) {
            int count = 0;
            int ind = 0;
            for (int j = 0;j < 8;j++) {
                if (num[i][j] == '#') {
                    count++;
                    ind = j;
                }
            }
            if (count == 1 && i > 0 && i < 7 && ind > 0 && ind < 7) {
                if (num[i-1][ind-1] == '#' and num[i-1][ind+1] == '#' and num[i+1][ind-1] == '#' and num[i+1][ind+1] == '#') {
                    cout << i+1 << " " << ind+1 << endl;
                    break;
                }
            }
        }


    }
    return 0;
}