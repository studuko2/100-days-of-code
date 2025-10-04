#include <stdio.h>

int main() {
    int a, b, c, d, e, f;

    printf("Enter two numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    c = a + b;
    d = a * b;
    e = a / b;
    f = a - b;

    printf("a=%d b=%d c=%d d=%d e=%d f=%d\n", a, b, c, d, e, f);

    return 0;
}

