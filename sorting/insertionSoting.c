#include<stdio.h>

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
}

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}


int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    insertionSort(arr, size);
    display(arr, size);



    return 0;
}