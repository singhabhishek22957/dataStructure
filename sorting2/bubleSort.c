#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble(int arr[], int size)
{
    int flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                flag = 1;
                swap(&arr[j], &arr[j - 1]);
            }
        }
        if(flag ==0) {
            break;
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

    int arr[] = {1, 34, 2, 45, 67, 87, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d ", size);
    display(arr, size);
    printf("\n");
    bubble(arr, size);
    display(arr, size); 

    return 0;
}