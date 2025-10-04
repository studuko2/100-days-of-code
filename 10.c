#include <stdio.h>

int main() {
    float Seconds, hours, minutes, seconds;

   
    printf("Enter time in seconds: ");
    scanf("%f", &Seconds);

  
    hours = Seconds / 3600;       
    minutes = Seconds/ 60; 
      

 
    printf("Time = %f:%f:%f\n", hours, minutes, Seconds);

    return 0;
}
