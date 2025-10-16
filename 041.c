#include <stdio.h>

int main() {
    int num, n, first, last, temp = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    last = n % 10;      

    while (n >= 10) {
        n = n / 10;
        temp = temp * 10; 
    }
    first = n;  

    int middle = num % temp;  
    middle = middle / 10;     

    int swapped = last * temp + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
