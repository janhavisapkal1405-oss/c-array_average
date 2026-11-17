#include <stdio.h>
int main() {
    int a[5], i, sum = 0;
    float average;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    average = sum / 5.0;
    printf("Average = %.2f\n", average);
    return 0;
}
