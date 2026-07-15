#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    double ch;
    
    if (scanf("%lf", &x) != 1) {
        printf("n/a");
        return 1;
    }

    do {
        ch = getchar();
    } while (ch != EOF &&
             (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r'));

    if (ch != EOF) {
       printf("n/a");
       return 1; 
    }

    printf("%.1f", x);

}