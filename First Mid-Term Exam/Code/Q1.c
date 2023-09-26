#include <stdio.h>

int sum_digits(int n);
int main()
{
    // Write C code here
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of digits of number %d is %d", num, sum_digits(num));

    return 0;
}
int sum_digits(int n)
{
    if (n != 0)
    {
        int rem = 0;
        rem += n % 10;

        return rem + sum_digits(n / 10);
    }
}