#include <stdio.h>

int get_unique_number(int arr[], int size)
{
    int unique_number = 0;
    for (int i = 0; i < size; i++)
    {
        unique_number ^= arr[i];
    }
    return unique_number;
}

int main()
{
    int a[7] = {4, 2, 5, 2, 5, 7, 4};
    int b[3] = {4, 2, 4};
    int size_a = sizeof(a) / sizeof(int);
    int size_b = sizeof(b) / sizeof(int);

    int unique_number_a = get_unique_number(a, size_a);
    int unique_number_b = get_unique_number(b, size_b);

    printf("The unique number in a{4, 2, 5, 2, 5, 7, 4} is : %d\n", unique_number_a);
    printf("The unique number in b{4, 2, 4} is : %d\n", unique_number_b);

    return 0;
}