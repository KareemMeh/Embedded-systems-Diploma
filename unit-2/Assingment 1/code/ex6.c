#include <stdio.h>
int main()
{
   float a , b , temp;
    printf("Enter a value of a  :");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &a);
    printf("Enter a value of b  :");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping value of a = %.2f\n " ,a);
    printf("after swapping value of b = %.2f\n " , b);
}