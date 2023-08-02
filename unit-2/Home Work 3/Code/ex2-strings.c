// Ex1

#include <stdio.h>

int main()
{

    char c[1000];
    int i, n = 0;
    printf("Insert String: ");
    gets(c);

    for (i = 0; c[i] != '\0'; i++)
    {
        n++;
    }
    printf("the length of string is %d characters ", n);
}