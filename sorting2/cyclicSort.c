#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;  
    *a = *b;
    *b = temp;
}

void display(int arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}

void cyclic(int arr[], int size){
    for (int i = 0; i < size; i++){
        while(arr[i]!=i+1){
            swap(&arr[i],&arr[arr[i]-1]);
        }
    }
    
}

int main(){

    printf("Cyclic Sort \n");

    int arr[] = {3,5,2,1,4,10,6,8,7,9}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    cyclic(arr,size);
    display(arr,size);
    


    return 0;
}