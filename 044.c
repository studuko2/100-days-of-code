#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    float numerator = 1.0, denominator = 2.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;   
        denominator += 2;  
    }

    printf("Sum of the series up to %d terms = %f\n", n, sum);

    return 0;
}
