#include <stdio.h>
#include <string.h>
// Function to reverse the words in a 2D array of characters.
void rev_words(char str[2][20])
{

    for (int i = 1; i >= 0; i--)
    {

        printf("%s ", str[i]);
    }
}

int main()
{
    char str[2][20];

    // Prompt the user to enter the string.
    printf("Enter a string: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s%s", str[0], str[1]);

    // Reverse the words in the string.
    rev_words(str);

    return 0;
}