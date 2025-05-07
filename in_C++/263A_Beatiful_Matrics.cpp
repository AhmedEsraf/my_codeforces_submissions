#include <bits/stdc++.h>

using namespace std;
int main()
{
    int row, col, steps = 0;
    int matrix[5][5];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> matrix[i - 1][j - 1];
            if (matrix[i - 1][j - 1] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    if (col > 3)
    {
        while (col != 3)
        {
            col = col - 1;
            steps++;
        }
    }
    else if (col < 3)
    {
        while (col != 3)
        {
            col = col + 1;
            steps++;
        }
    }

    if (row > 3)
    {
        while (row != 3)
        {
            row = row - 1;
            steps++;
        }
    }
    else if (row < 3)
    {
        while (row != 3)
        {
            row = row + 1;
            steps++;
        }
    }

    cout << steps << endl;
}