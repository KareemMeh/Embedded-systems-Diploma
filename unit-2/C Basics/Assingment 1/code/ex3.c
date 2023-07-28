#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter two numbers :");
    fflush(stdin);
    fflush(stdout);
    scanf("%d%d", &a ,&b);
    printf("sum : %d\n", a+b);
}