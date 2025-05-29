#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long double sum = 0.0;

    for (int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);
        sum += p;
    }

    long double avg = sum / n;
    printf("%.12Lf\n", avg); // Note: capital L for long double
    return 0;
}
