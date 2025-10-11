#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int binary = 0;
    int place = 1;

    while (num > 0) {
        int rem = num % 2;
        binary += rem * place;
        num /= 2;
        place *= 10;
    }

    printf("Binary: %d\n", binary);

    return 0;
}
