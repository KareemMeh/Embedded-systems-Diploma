#include <stdio.h>
#include <string.h>
void convert_to_binary(int num, char bin[])
{
    int i = 0;

    while (num > 0)
    {
        bin[i++] = (num % 2) + '0';
        num /= 2;
    }

    bin[i] = '\0';
}

int count_ones(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main()
{
    int number,i;
    char bin[50];
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &number);
    convert_to_binary(number, bin);
    // Print the binarry array in reverse order
    for (i = strlen(bin) - 1; i >= 0; i--)
    {
        printf("%c", bin[i]);
    }

    int number_of_ones = count_ones(number);

    printf("\nThe number of ones in %d is %d.\n", number, number_of_ones);

    return 0;
}