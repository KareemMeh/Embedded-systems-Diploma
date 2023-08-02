// Ex1

#include <stdio.h>

int main()
{

    char c[1000], ch;
    int i, n = 0, flag = 0;
    printf("Insert String: ");
    gets(c);
    printf("Insert a character to count: ");
    scanf("%c", &ch);
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ch)
        {
            n++;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Character found %d times", n);
    }
    else
    {
        printf("Character not found");
    }
}