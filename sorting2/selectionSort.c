#include<stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int maxIndex(int arr[],int start,int end){
    int max = start;
    for(int i = start+1;  i<end;i++){
        if(arr[max]<arr[i]){
            max = i;
        }
    }
    return max;
}

void selection(int arr, int size){
    for (int i = 0; i < size-1; i++)
    {
        int last = size-1-i;
        int maxInsex = maxIndex(arr,0,last);
        swap(&last,&maxIndex);
    }
    
}

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       printf("%d\t",arr[i]);
    }
    printf("\n");
    
}

int main(){

    printf("Selection Sort \n");
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    selection(arr,size);
    display(arr,size);

    
    


    return 0;
}