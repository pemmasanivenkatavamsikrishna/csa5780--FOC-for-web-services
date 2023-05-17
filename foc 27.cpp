#include <stdio.h>
#include <math.h>

int main() {
    double x, sinx, term;
    int i, j, sign;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    sinx = x;
    term = x;

    for (i = 1, j = 3, sign = -1; i <= 9; i++, j += 2, sign *= -1) {
        term *= x * x / (j * (j - 1));
        sinx += sign * term;
    }

    printf("The sine of %.2f radians is %.4f", x, sinx);

    return 0;
}

