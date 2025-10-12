#include <stdio.h>

int main() {
    int num, temp, remainder, n = 0, result = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;


    int count = 0;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = num;


    while (temp != 0) {
        remainder = temp % 10;

     
        power = 1;
        for (i = 1; i <= count; i++) {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
