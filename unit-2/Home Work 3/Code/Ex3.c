// Ex3

#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter Number of Rows and columns: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d%d", &r, &c);

    float a[r][c], t[c][r];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("number%d%d: ", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Entered Matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%.1f\t", a[i][j]);
            if (j == c - 1)
            {
                printf("\n");
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    printf("Transpose of Matrix :\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%.1f\t", t[i][j]);
            if (j == r - 1)
            {
                printf("\n");
            }
        }
    }
}