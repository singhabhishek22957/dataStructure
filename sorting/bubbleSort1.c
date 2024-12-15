#include<stdio.h>

void bubbleSort(int arr[],int size){
    for (int i = 0; i < size-1; i++){
        for(int j = 1; j<size-i;j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}
void display(int arr[],int size){
    for (int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}


int main(){

    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    bubbleSort(arr, size);
    display(arr, size);


    return 0;
}