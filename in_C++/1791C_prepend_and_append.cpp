#include<bits/stdc++.h>
using namespace std;

int shortstring(bool is_even,string s) {
    if (is_even) {
        while(s.size() > 0) {
            if (s[0] != s[s.size()-1]) {
                s.erase(s.begin());
                s.erase(s.end()-1);
            }
            else {
                break;
            }
        }
    }
    else if (is_even == false) {
        while(s.size() > 1) {
            if (s[0] != s[s.size()-1]) {
                s.erase(s.begin());
                s.erase(s.end()-1);
            }
            else {
                break;
            }
        }
    }

    return s.size();
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int num;
        string s;
        cin >> num >> s;
        bool is_even = true;

        if (num % 2 == 1){
            is_even = false;
        }

        cout << shortstring(is_even,s) << endl;
        
    }

    return 0;
}