#include <stdio.h>


void swap(int *x , int *y){
  int temp ; 
  temp = *x;
  *x = *y ;
  *y = temp ;
}

void main()
{

    printf("Pointer Swapping \n");

    int a = 10;
    int b = 30;
    swap(&a,&b);
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);
    printf("\n");
    
}