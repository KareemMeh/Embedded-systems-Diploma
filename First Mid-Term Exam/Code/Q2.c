#include <stdio.h>
#include <math.h>

double get_sqrt(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The square root of %d is %.2lf", num, get_sqrt(num));
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
double get_sqrt(int n)
{
    return sqrt(n);
}