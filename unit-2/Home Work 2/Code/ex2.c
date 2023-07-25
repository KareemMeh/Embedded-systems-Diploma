#include <stdio.h>

int main()
{
    char c;
    printf("Enter a Letter : ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is  Vowel", c);
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is  Vowel", c);
    }
    else
    {
        printf("%c is Constant", c);
    }
}