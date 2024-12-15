#include<stdio.h>

void selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        //swap the value
        int temp = arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }
}

void display(int arr[], int size ){
    for (int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}

int main(){

     int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    selectionSort(arr, size);
    display(arr, size);



    return 0;
}