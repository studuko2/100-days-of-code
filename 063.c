#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    int i, j;

    
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

  
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (int k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }

    return 0;
}
