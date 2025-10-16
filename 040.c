#include <stdio.h>

int main() {
    long long num, onesComp = 0, place = 1;
    int bit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num > 0) {
        bit = num % 10;         
        if (bit == 0)
            bit = 1;
        else
            bit = 0;

        onesComp = bit * place + onesComp;
        num = num / 10;
        place = place * 10;
    }

    printf("1's Complement = %lld\n", onesComp);

    return 0;
}
