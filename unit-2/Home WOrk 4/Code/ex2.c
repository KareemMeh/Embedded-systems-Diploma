#include <stdio.h>
int factorial(int n);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a < 0)
    {
        printf("Error!!! Factorial of negative number doesn't exist");
    }
    else
    {
        int fa = factorial(a);
        printf("The factorial of %d is %d",a,fa);
    }
}
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n * factorial(n - 1);
}
