
#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        
        root1 = (-b + pow(discriminant, 0.5)) / (2 * a);
        root2 = (-b - pow(discriminant, 0.5)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %f and Root 2 = %f\n", root1, root2);
    }
    else if (discriminant == 0) {
      
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = pow(-discriminant, 0.5) / (2 * a);
        printf("Roots are imaginary.\n");
        printf("Root 1 = %f + %fi and Root 2 = %f - %fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

   
