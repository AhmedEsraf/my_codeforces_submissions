#include<bits/stdc++.h>
#include<algorithm>
#include<cctype>

using namespace std;
int main() {
    string num1,num2;
    cin >> num1 ;
    cin >> num2 ;

    int size = num1.length();
    
    transform(num1.begin(),num1.end(),num1.begin(),::toupper);
    transform(num2.begin(),num2.end(),num2.begin(),::toupper);
    
    for (int i = 0; i<size ; i++) {
        if(num1[i] < num2[i]) {
            cout << "-1" << endl;
            return 0;
        }
        else if (num1[i] > num2[i]) {
            cout << "1" << endl;
            return 0;
            
        }
    
    }
    cout << "0" << endl;
}