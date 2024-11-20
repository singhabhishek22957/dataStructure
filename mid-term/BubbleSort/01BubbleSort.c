#include<stdio.h>

int main(){

    printf("Bubble Sort \n");

    int arr [] = {21,5,356,76,98,234,563,9,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    for(int i=0;i<size-1;i++){
       for(int j=0;j<size-i-1;j++){
         if(arr[j]>arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            temp=0;
        }
       }
    }
    printf("Sorted Array \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    


    return 0;
}