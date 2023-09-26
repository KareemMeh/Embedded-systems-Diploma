#include <stdio.h>
int reverse_digits(int n);
int main()
{
    // Write C code here
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("after revese: %d", reverse_digits(num));

    return 0;
}
int reverse_digits(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        reversed = reversed * 10 + last_digit;
        n /= 10;
    }
    return reversed;
}