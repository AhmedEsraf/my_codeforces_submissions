#include<stdio.h>

int main() {
    int participants,target;
    scanf("%d%d",&participants,&target);

    int winners = 0;
    int scores[participants];

    for(int i = 0;i < participants;i++) {
        scanf("%d",&scores[i]);
    }
    for (int j = 0;j < participants;j++) {
        if (scores[j] > 0 && scores[j] >= scores[target-1]) {
            winners++;
        }
    }
    printf("%d",winners);
}