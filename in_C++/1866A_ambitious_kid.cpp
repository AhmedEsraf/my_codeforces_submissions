#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0;i < num;i++) {
        cin >> arr[i];

    }
    int min = abs(arr[0]);
    for (int i = 1;i < num;i++){
        if (min > abs(arr[i])){
            min =abs(arr[i]);
        }
    }
    cout << min << endl;

    return 0;
}