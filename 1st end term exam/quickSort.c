#include<stdio.h>

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<high;j++){
        if(pivot>arr[j]){
            i++;
            // swap value ;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // place the pivot value;
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;
    return i;
}

void quickSorting(int arr[] , int low, int high){
    if(low<high){
        int pivotIndex = partition(arr, low,high);
        quickSorting(arr,low,pivotIndex-1);
        quickSorting(arr, pivotIndex+1,high);
    }
}
void display(int arr[] , int size){
    for (int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    quickSorting(arr,0,size-1);
    display(arr, size);
}