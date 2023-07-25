#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers :");
    fflush(stdin);
    fflush(stdout);
    scanf("%f%f", &a, &b);
    printf("sum : %f\n", a * b);
}