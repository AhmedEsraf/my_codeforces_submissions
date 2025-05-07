#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);

    int count = 0;
    for (int i = 0;i < num ;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if ( a+b+c > 1) {
            count++;
        }
    }
    printf("%d",count);
}