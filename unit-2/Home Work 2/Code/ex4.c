#include <stdio.h>
int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    if (a > 0)
    {
        printf("number is positive ");
    }
    else if (a < 0)
    {
        printf("number is negative");
    }
    else
    {
        printf("You enterd zero");
    }
}