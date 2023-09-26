#include <stdio.h>
int get_sum(int n);
int main()
{

    int num;
    printf("Enter a number to get it's sum form 0 to itself: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    printf("Sum from 0 to %d is %d", num, get_sum(num));

    return 0;
}
int get_sum(int n)
{

    if (n != 0)
    {
        return (n + get_sum(n - 1));
    }
}