#include <stdio.h>
#include <math.h>
int main()
{
    int row, col, steps = 0;

    int arr[5][5];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &arr[i - 1][j - 1]);
            if (arr[i - 1][j - 1] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    if (row != 3)
    {
        steps = steps + abs(3 - row);
    }
    if (col != 3)
    {
        steps = steps + abs(3 - col);
    }
    printf("%d", steps);
}