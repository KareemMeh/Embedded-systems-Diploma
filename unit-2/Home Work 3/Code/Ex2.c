// Ex2

#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter Number of Elements: ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &n);
    } while (n <= 0);

    float a[n], sum, av;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("number %d: ", i + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%f", &a[i]);
        sum += a[i];
    }
    av = sum / n;
    printf("Average of numbers = %.2f", av);
}