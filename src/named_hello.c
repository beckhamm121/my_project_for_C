#include <stdio.h>

int main(void) {
    int x;
    int ch;

    if (scanf("%d", &x) != 1) {
        return 1;
    }

    ch = getchar();

    if (ch == '\n' || ch == EOF) {
        printf("Hello, %d!", x);
        return 0;
    }

    return 1;
}