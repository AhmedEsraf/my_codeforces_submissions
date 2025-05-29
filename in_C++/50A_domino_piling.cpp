#include <bits/stdc++.h>

using namespace std;
int main()
{

    int row, col;
    cin >> col >> row ;

    int domino_num = 0, extra_space = 0;

    if (col % 2 == 1)
    {
        extra_space = row;
    }

    while (col > 1)
    {
        col = col - 2;
        domino_num++;
    }
    domino_num = domino_num * row;

    while (extra_space > 1)
    {
        domino_num++;
        extra_space = extra_space - 2;
    }
    cout << domino_num;
}