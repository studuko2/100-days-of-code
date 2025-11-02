#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num < 0)
        num = -num;

    int freq[10] = {0}; 

  
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxDigit = 0, maxCount = freq[0];

    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}
