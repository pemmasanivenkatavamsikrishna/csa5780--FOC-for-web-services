#include <stdio.h>

int main() {
    int n, i, num, biggest;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter the integers:\n");
    scanf("%d", &biggest);

    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > biggest) {
            biggest = num;
        }
    }

    printf("The biggest number is %d", biggest);

    return 0;
}
