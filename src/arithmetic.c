#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

void print_arithmetic(int a, int b) {
    printf("%d %d %d", sum(a, b), subtract(a, b), multiply(a, b));

    if (b == 0) {
        printf(" n/a");
    } else {
        printf(" %d", division(a, b));
    }
}

int main(void) {
    int a, b;
    int ch;

    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }

    ch = getchar();

    if (ch == '\n' || ch == EOF) {
        print_arithmetic(a, b);
        return 0;
    }


    printf("n/a");
    return 1;


}

