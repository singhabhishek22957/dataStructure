#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;  
    *a = *b;
    *b = temp;
}

void display(int arr[], int size){

    for (int i = 0; i < size; i++)  
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}


void insertion(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        for (int j  = i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(&arr[j],&arr[j-1]);
            }else{
                break;
            }
        }
        
    }
}

int main(){

    printf("Insertion Sort \n");

    int arr[] = {1, 34, 2, 45, 67, 87, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d ", size);
    display(arr, size);
    printf("\n");
    insertion(arr, size);
    display(arr, size);
    


    return 0;
}