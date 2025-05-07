#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        int temp;
        vector<int> arr;
        bool pos = false;
        for (int i = 0; i < num;i++) {
            cin >> temp;
            arr.push_back(temp);
            }
        for (int i = 1;i < num;i++) {
            if (arr[0] != arr[i]) {
                pos = true;
                break;
            }
        }
        if (pos == false) {
            cout << "NO" << endl;
        }
        else if(pos == true) {
            cout << "YES" << endl;
            int big = *max_element(arr.begin(),arr.end());
            for (int i = 0;i < num;i++){
                if (arr[i] == big) {
                    cout << 2 <<" ";
                }
                else {
                    cout << 1 <<" ";
                }
            }
            cout << endl;
            }
            
        }   
    }
