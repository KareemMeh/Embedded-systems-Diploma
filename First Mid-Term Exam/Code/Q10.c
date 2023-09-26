#include <stdio.h>
#include <string.h>
#include <math.h>

void convert_to_binary(int num, char bin[]);
int count_ones(int num);
int count_max_consecutive_ones(int num);
int main()
{
    char bin[50];
    int num, i;
    int count;

    printf("Enter a number: ");
    scanf("%d", &num);

    convert_to_binary(num, bin);
    // Print the bin array in reverse order
    for (i = strlen(bin) - 1; i >= 0; i--)
    {
        printf("%c", bin[i]);
    }

    count = count_ones(num);

    printf("\nThe number of 1s in the binary representation of %d is %d.\n", num, count);

    int max_ones = count_max_consecutive_ones(num);
    printf("the max number of ones in %d is %d", num, max_ones);
    return 0;
}
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
int count_ones(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            count++;
        }
        num /= 2;
    }
    return count;
}
int count_max_consecutive_ones(int num)
{
    int max_count = 0;
    int current_count = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            current_count++;
        }
        else
        {
            max_count = fmax(max_count, current_count);
            current_count = 0;
        }
        num /= 2;
    }
    return fmax(max_count, current_count);
}