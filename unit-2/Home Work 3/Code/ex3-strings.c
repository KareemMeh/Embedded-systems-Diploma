// Ex1

#include <stdio.h>

int main()
{

    char c[1000];
    char r[1000];
    int i, n = 0;
    printf("Insert String: ");
    gets(c);

    for (i = 0; c[i] != '\0'; i++)
    {
        n++;
    }
    for (i = 0; i <= n; i++)
    {
        r[i] = c[n - i];
    }
    for (i = 0; i <= n; i++)
    {
        printf("%c", r[i]);
    }
}