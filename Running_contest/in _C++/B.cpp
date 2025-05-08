#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        

        int blue = 0;
        int red= 0;
        int unknown = 0;

        vector<int> arr;
        int temp;
        for(int i = 0;i < num;i++ ){
            cin >> temp;
            arr.push_back(temp);
            if (temp == 0) {
                unknown++;
            }
            if (temp == 1){
                red++;
            }
            if (temp == 2) {
                blue++;
            }
        }
        if (num % 2 == 1) {
            cout << "No" << endl;
            continue;
        }


        if (blue > (num/2) or red > (num / 2)) {
            cout << "No" << endl;
        }
        else {
            cout <<"Yes" << endl;
        }


    }
    return 0;
}