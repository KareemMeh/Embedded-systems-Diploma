// Ex2

#include <stdio.h>

int main()
{
    int n, i, e, x;
    do
    {
        printf("Enter Number of Elements: ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &n);
    } while (n <= 0);

    int a[n], new[n + 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("Entered Data:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nEnter the Element to be inserted: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &e);

    printf("Enter Location: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &x);

    for (i = 0; i <= n; i++)
    {
        if (i == x)
        {
            new[i] = e;
        }
        else if (i > x)
        {
            new[i] = a[i - 1];
        }
        else
        {
            new[i] = a[i];
        }

        printf("%d  ", new[i]);
    }
}