#include<stdio.h>
#include<string.h>

int main() {
    int number;
    scanf("%d",&number);
    for (int i = 0; i < number ;i++) {
        char word[100];
        scanf("%s",word);
        int size = strlen(word);

        if (size > 10) {
            printf("%c",word[0]);printf("%d",size-2);printf("%c\n",word[size-1]);
        }
        else {
            printf("%s\n",word);
        }
    }
}