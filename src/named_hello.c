#include <stdio.h>

int main(void)
{
    int x;
    int ch;

    if (scanf("%d", &x) != 1) {
        return 1;
    }

    ch = getchar();
    

    while (ch == ' ' || ch == '\t')
        ch = getchar();


    if (ch != '\n' && ch != EOF) {
        return 1;
    }

    printf("Hello, %d!", x);
    return 0;
}