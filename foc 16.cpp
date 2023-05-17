#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}

