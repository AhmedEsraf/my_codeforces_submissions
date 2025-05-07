#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num,k;
        cin >> num >> k;
        
        int temp;
        vector<int> arr;
        for (int i = 0;i < num;i++) {
            cin >> temp;
            arr.push_back(temp);
        }

        bool found = false;
        int turn = 0;

        while(found == false) {
        sort(arr.begin(),arr.end());

        int big = arr[num-1];
        if (big == 0) {
            if (turn % 2 == 1) {
                cout << "Tom" << endl;
            }
            else if(turn % 2 == 0){
                cout << "Jerry" << endl;
                
            }
            break;
        }

        arr[num-1]--;
        turn++;
        sort(arr.begin(),arr.end());

        int hi = *max_element(arr.begin(),arr.end());
        int lo = *min_element(arr.begin(),arr.end());
        if (hi-lo > k) {
            if (turn % 2 == 0) {
                cout << "Tom" << endl;
                found = true;
                break;
            }
            else if (turn % 2 == 1) {
                cout << "Jerry" << endl;
                found = true;
                break;
            }
       }
    }
    }
    return 0;
}