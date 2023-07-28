#include <stdio.h>
int main()
{
    int a, f = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Error!!! Factorial of negaive number doesn't exist");
    }
    else
    {
        for (int i = a; i >= 1; i--)
        {
            f *= i;
        }
        printf("Factorial of %d is %d", a, f);
    }
}