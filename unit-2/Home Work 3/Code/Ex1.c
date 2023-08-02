// Ex1

#include <stdio.h>

int main()
{

    float a[2][2];
    float b[2][2];
    float sum[2][2];
    int i, j;
    printf("Insert elements of first Array: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Insert elements of second Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter b%d%d: ", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("==============\n");
    printf("Sum of Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.2f\t", sum[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
}