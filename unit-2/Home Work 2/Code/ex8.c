#include <stdio.h>
int main()
{
    float a, b;
    char op;
    printf("Enter two numbers:\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f%f", &a, &b);
    printf("Enter an Operator + or - or * or / : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf(" %.1f + %.1f = %.1f ", a, b, a + b);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", a, b, a - b);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", a, b, a * b);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", a, b, a / b);
        break;
    default:
        printf(" Enter Correct Operator + or - or * or / .. \n");
    }
}