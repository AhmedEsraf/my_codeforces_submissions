#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r,b,rm,bm;
    cin >> r >> b >> rm >> bm;
    if (r*rm > b*bm) cout << r*rm << endl;
    else cout << b*bm << endl;

    return 0;
}