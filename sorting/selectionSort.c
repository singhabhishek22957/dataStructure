#include<stdio.h>


void selectionSort(int arr[],int size){
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size-1; j++)
        {
            int temp = 0;
            int min = arr[i];
            int minindex=i;
            if(arr[j+1]<min){
                min=arr[j+1];
                minindex=j+1;
            }
            temp = arr[minindex];
            arr[minindex] = arr[i];
            arr[i] = temp;
        }
        
        
    }
    
}

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}

int main(){

    printf("Selection Sort \n");
    int arr[] = {1,23,54,76,89,3,4,23,45,12,34,44};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    printf("\nsorted array\n");
    selectionSort(arr,size);
    display(arr,size);
    


    return 0;
}