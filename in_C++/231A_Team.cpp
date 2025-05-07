#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int count = 0;

    for (int i = 0;i < num;i++) {
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a+b+c > 1) {
            count++;
        }
    }
    cout << count << endl;
}