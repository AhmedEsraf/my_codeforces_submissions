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

        vector<int> arr(num);
        

        for (int i=0;i < num;i++) cin >> arr[i];
            
        for (int i= 0;i < num;i++) {
            int cur_sum = 0;
            for (int j=i;j< num;j++) {
                cur_sum+=arr[j];
                if (cur_sum % 3 == 0) {
                    cout << "YES" << endl;
                    goto new_case;
                }
            }
        }
        cout << "NO" << endl;
        new_case:
    }

    return 0;
}