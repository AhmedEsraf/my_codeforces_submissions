#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);
        sum += p;
    }

    double average = sum / n;
    printf("%.12lf\n", average);
    return 0;
}
