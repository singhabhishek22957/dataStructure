#include<stdio.h>

void searchh(int arr[] , int target , int size){
  int j = size-1;
  int i = 0;
  while(i<j){
    if(arr[i]+arr[j]==target){
      printf("Element 1st= %d and 2nd= %d found  at i= %d , j=%d\n",arr[i],arr[j],i,j);
      return ;
    }else if(arr[i]+arr[j]<target){
      i++;
    }else if(arr[i]+arr[j]>target){
    j--;
  }
 
  }
   printf("Element is not found\n");
}

int main(){

  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,24,56,78,90,111,123,234,345,451,678,789,890,900};
  int size = sizeof(arr)/sizeof(arr[0]);
 int target =  456;
searchh(arr,target,size);
  return 0;
}