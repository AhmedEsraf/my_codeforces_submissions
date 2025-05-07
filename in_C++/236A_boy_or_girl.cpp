#include<bits/stdc++.h>
#include<set>

using namespace std;
int main() {
    string str;
    cin >> str;

    set<char> unique;
    for (char ch: str) {
        unique.insert(ch);
    }
    int size = unique.size();
    if (size % 2 != 0) {
        cout << "IGNORE HIM!" << endl;

    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
}