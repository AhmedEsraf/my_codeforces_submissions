#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        string arr;
        cin >> arr;
        int lindex = 0, rindex = 1;
        set<string> unique;
        for (int i = 0;i < num-1;i++){
            string temp = string(1, arr[lindex]) + string(1, arr[rindex]);
            unique.insert(temp);
            lindex++;
            rindex++;
        }
        cout << unique.size() << endl;
    }
    return 0;
}