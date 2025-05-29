#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        int count = 0;
        if (num <=2) {
            count = count + num +1;
        }
        else if (num > 2) {
            count = count + 3;
        }
        int diff = num / 15;
        
        if (diff > 0) {
            count = count + (diff-1)*3;
            if (num >= diff*15) {
                count++;
            }
            if (num >= (diff*15 )+ 1) {
                count++;
            }
            if (num >= (diff*15 )+ 2) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}