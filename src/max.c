#include <stdio.h>

int max(int x, int y) {
    int result = x;
    if (x < y) {
        result = y;
    }
    return result;
}

int main(void) {
    int a, b;
    int ch;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    
    ch = getchar();

    while (ch == ' ' || ch == '\t') {
        ch = getchar();
    }

    if (ch != '\n' && ch != EOF){
        printf("n/a");
        return 1;
    }

    if (a == b) {
        printf("%d", a);
        return 0;
    }

    printf("%d", max(a, b));
    return 0;

}