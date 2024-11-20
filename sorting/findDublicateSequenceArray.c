#include<stdio.h>

int main(){

    printf("findDuplicateSequenceArray \n");
    int arr [] = {1,2,3,4,5,6,7,8,9,10,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<size;i++){

        sum = sum + arr[i];
    }
    int naturalSum = (10*(10+1))/2;
    if(sum==naturalSum){
        printf("Array is not contains duplicate elements");

    }else if(sum>naturalSum){
        printf("Array is contains duplicate elements which is :%d ",sum-naturalSum);
    }else{
        printf("Something wrong");
    }
    return 0;
}