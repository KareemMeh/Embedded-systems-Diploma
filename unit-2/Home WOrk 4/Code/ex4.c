#include <stdio.h>
double power(double n, int p);
int main()
{
    double num;
    int pw;
    printf("Enter number: ");
    scanf("%lf", &num);
    printf("Enter power: ");
    scanf("%d", &pw);
    double result = power(num, pw);
    printf("(%.1lf)^%d is equal to %g", num, pw, result);

    return 0;
}
double power(double n, int p)
{

    if (n == 0)
        return 0;

    else
    {
        if (p == 0)
            return 1;
        else if (p > 0)
        {
            if (n == 1)
                return 1;
            else
                return n * power(n, p - 1);
        }
        else
        {
            p *= -1;
            double res = n * power(n, p - 1);
            return 1 / res;
        }
    }
}