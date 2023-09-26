#include <stdio.h>
#include <string.h>
int main()
{
    void reverse(char str[])
    {
        int len = strlen(str);
        for (int i = 0; i < len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[len - i - 1];
            str[len - i - 1] = temp;
        }
    }

    char str[100];

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    printf("The string you entered is: %s", str);
    reverse(str);

    printf("after reverse is: %s", str);

    return 0;
}