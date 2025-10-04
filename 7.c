   
    #include<stdio.h>
    int main(){
        int n1=5;
        int n2=2;
        printf("before swapping a= %d, b=%d\n", n1,n2);
        
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;

          printf("before swapping a= %d, b=%d", n1,n2);
          return 0;
    }