#include <stdio.h>
#include <math.h>

int main() {
    double x, expx, term;
    int i;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    expx = 1;
    term = 1;

    for (i = 1; i <= 10; i++) {
        term *= x / i;
        expx += term;
    }

    printf("The exponential of %.2f is %.4f", x, expx);

    return 0;
}

