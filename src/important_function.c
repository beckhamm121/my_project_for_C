#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    double ch;

    if (scanf("%lf", &x) != 1) {
        printf("n/a");
        return 1;
    }

    if (x == 0) {
        printf("n/a");
        return 0;
    }

    ch = getchar();

    while (ch == ' ' || ch == '\t') {
        ch = getchar();
    }

    if (ch != '\n' && ch != EOF) {
        printf("n/a");
        return 1;
    }

    // y = 7e-3 × x⁴ + ((22.8 × x^(1/3) – 1e3) × x + 3) / (x² / 2) – x × (10 + x)^(2/x) – 1.01
    double x2 = x * x;
    double x4 = x2 * x2;
    
    double term1 = 7e-3 * x4;
    
    double term2 = (22.8 * cbrt(x) - 1e3) * x + 3.0;
    double denom = x2 / 2.0; 
    double term3 = term2 / denom;
    
    double term4 = x * pow(10.0 + x, 2.0 / x);

    double y = term1 + term3 - term4 - 1.01;

    printf("%.1f", y);
    return 0;

}