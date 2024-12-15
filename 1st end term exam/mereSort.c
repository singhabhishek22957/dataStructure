#include<stdio.h>
#include<stdlib.h>
int* merge(int leftArr[], int leftSize, int rightArr[], int rightSize);
void display(int arr[] , int size){
    for(int i = 0; i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int* mergeSorting(int arr[] , int start, int end){
    if(start>=end){
        int* singleArr = (int*)malloc(sizeof(int));
        singleArr[0]=arr[start];
        return singleArr;
    }

    int mid = start +(end-start)/2;


    int* leftArr = mergeSorting(arr, start,mid);
    int* rightArr = mergeSorting(arr, mid+1,end);
    int leftArrSize = (mid-start)+1;
    int rightArrSize = end-mid;
    int* sortedArr = merge(leftArr,leftArrSize,rightArr,rightArrSize);
    free(leftArr);
    free(rightArr);

    return sortedArr;
}

int* merge(int leftArr[], int leftSize, int rightArr[]  ,int rightSize ){
    int* mergeArr = (int*)malloc(sizeof(int)*(rightSize+leftSize));

    int i = 0, j = 0, k=0;
    while(i<leftSize&& j<rightSize){
        if(leftArr[i]<rightArr[j]){
            mergeArr[k]=leftArr[i];
            i++;
        }else{
            mergeArr[k]= rightArr[j];
            j++;
        }
        k++;
    }
    while(i<leftSize){
        mergeArr[k]=leftArr[i];
        i++;k++;
    }

    while(j<rightSize){
        mergeArr[k]=rightArr[j];
        j++;k++;
    }

    return mergeArr;
}
int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    int* sortedArr = mergeSorting(arr, 0, size-1);
    display(sortedArr,size);
}