#include<stdio.h>
int main()
{
int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is the biggest number", a);
    } else {
        printf("%d is the biggest number", b);
    }

    return 0;
}
