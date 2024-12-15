#include <stdio.h>
void bobbleSort(int arr[], int size)
{

    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{

    printf("Bubble Sort \n");
    int arr[] = {1, 34, 2, 45, 67, 87, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d ", size);
    display(arr, size);
    printf("\n");
    bobbleSort(arr, size);
    display(arr, size);

    return 0;
}