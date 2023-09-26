#include <stdio.h>

void reverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        int j = size - i - 1;
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements in the array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before reversing: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray after reversing: ");
    reverse(arr, size);

    return 0;
}