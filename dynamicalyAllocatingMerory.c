#include <stdio.h>

void main()
{

  printf("Dynamicly  Allocating Memory\n");
  int size;
  printf("Enter the size of the array: ");
  scanf("%d",&size);

  int *ptr;

  ptr = (int *)malloc(size*sizeof(int));

  for (int i = 0; i < size; i++){   
    // printf("Enter %d  number:  ",i+1);
    // scanf("%d",&ptr[i]);
    ptr[i] = i+1;
  }

  for (int i = 0; i < size; i++){
    printf(" %d\t",ptr[i]);
  }


  free(ptr);
  
  
  
}