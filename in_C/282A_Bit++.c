#include <stdio.h>
#include<string.h>

int main()
{
    int num;
    scanf("%d", &num);

    int initial = 0;
    for (int i = 0; i < num; i++)
    {
        char op[4];
        scanf("%s", op);

        if (op[0] == '+' || op[1] == '+' || op[2] == '+')
        {
            initial += 1;
        }
        else if (op[0] == '-' || op[1] == '-' || op[2] == '-')
        {
            initial -= 1;
        }
    }
    printf("%d",initial);
}