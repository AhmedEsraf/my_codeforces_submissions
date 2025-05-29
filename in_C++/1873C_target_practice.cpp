#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string line;
        int min;
        int score = 0;
        for (int row = 1; row <= 10; row++)
        {

            cin >> line;
            for (int col = 1; col <= 10; col++)
            {
                if (line[col - 1] == 'X')
                {
                    if (row <= 5 and col <= 5)
                    {
                        min = max(abs(row-5),abs(col-5));
                    }
                    else if (row <= 5 and col > 5)
                    {
                        min = max(abs(row-5),abs(col-6));
                    }
                    else if (row > 5 and col <= 5)
                    {
                        min = max(abs(row-6),abs(col-5));
                    }
                    else if (row > 5 and col > 5)
                    {
                        min = max(abs(row-6),abs(col-6));
                    }
                    if (min == 4) { min =1;}
                else if (min == 3) { min =2;}
                else if (min == 2) { min =3;}
                else if (min == 1) { min =4;}
                else if (min == 0) { min =5;}
                score = min + score;
            }
                }
                

        }
        cout << score << endl;
    }
    return 0;
}