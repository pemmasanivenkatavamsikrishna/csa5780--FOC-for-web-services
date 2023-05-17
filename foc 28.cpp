#include <stdio.h>
#include <math.h>

int main() {
    double x, cosx, term;
    int i, j, sign;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    cosx = 1;
    term = 1;
    sign = -1;

    for (i = 2, j = 2; i <= 10; i += 2, j += 2) {
        term *= x * x / (j * (j - 1));
        cosx += sign * term;
        sign *= -1;
    }

    printf("The cosine of %.2f radians is %.4f", x, cosx);

    return 0;
}

