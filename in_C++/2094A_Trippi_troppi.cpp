#include<iostream>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0;i < num;i++) {
        string A,B,C;
        cin >> A >> B>> C;

        cout << A[0]  << B[0] << C[0] << endl;
    }

    return 0;
}