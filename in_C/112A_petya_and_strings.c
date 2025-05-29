#include <stdio.h>
#include<ctype.h>
int main()
{
    char num1[101], num2[101];
    scanf("%s", num1);
    scanf("%s", num2);

    int size = strlen(num1);

    for (int i = 0; num1[i] != '\0'; i++)
    {
        num1[i] = toupper(num1[i]);
    }

    for (int i = 0; num2[i] != '\0'; i++)
    {
        num2[i] = toupper(num2[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (num1[i] > num2[i])
        {
            printf("%d", 1);
            return 0;
        }
        else if (num1[i] < num2[i])
        {
            printf("%d", -1);
            return 0;
        }
    }
    printf("%d", 0);
}