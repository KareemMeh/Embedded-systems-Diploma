// Ex2

#include <stdio.h>

int main()
{
    int n, i, e, found;
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
    printf("\nEnter the Element to be Searched : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &e);

    for (i = 0; i < n; i++)
    {
        if (a[i] == e)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Number found at index %d", i + 1);
    }
    else
    {
        printf("Not Fonud");
    }
    return 0;
}