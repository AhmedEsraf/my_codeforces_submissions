#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;

        vector<int> hp(num);
        int maxHP = 0;

        for (int i =0;i< num;i++) {
            cin >> hp[i];
            maxHP = max(maxHP,hp[i]);
        }
        sort(hp.begin(),hp.end());

        int count = num;
        for (int i = 0;i < num;i++) {
            int x = hp[i];
            int alive = hp.end() - upper_bound(hp.begin(), hp.end(), x);
            count = min(count,x+alive);
        }
        cout << count << endl;

        
    }

    return 0;
}