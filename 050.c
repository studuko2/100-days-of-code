#include <stdio.h>

int main() {
    int n = 5, i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (k = i; k < n; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
