#include <stdio.h>
int main()
{
    float a, b, temp;
    printf("Enter a value of a : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &a);
    printf("Enter a value of b : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &b);
    // ex ..  a =10 , b =20;
    a = a + b ; // a =30
    b = a - b ; // b = 30-20=10 ... swapped
    a = a - b ; // a = 30-10 =20 .. swapped

    printf("after swapping value of a = %.2f\n ", a);
    printf("after swapping value of b = %.2f\n ", b);
}