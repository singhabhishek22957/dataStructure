#include <stdio.h>

 int max = 5;
int arr[5];
int first = -1;
int last = -1;

int isEmpty(){
  if (first == -1 && last == -1)
  return 1;
  else
  return 0;

}

int isFull(){
  if (first == 0 && last == max - 1){
    return 1;
  }else{
    return 0;
  }
  
}

void push(int data){
  if(isFull()){
    printf("Queue is full\n");
  }else{
    if(first==-1){
      first = 0;
    }
    last++;
    arr[last] = data;
  }
}

void pop(){
  if(isEmpty()){
    printf("Queue is empty\n");
  }else{
    printf("Deleted element is %d\n", arr[first]);
    first++;
  }
}


void display(){
  if(isEmpty()){
    printf("Queue is empty\n");
  }else{
    int i = first;
    while(i<=last){
      printf("%d ", arr[i]);
      i++;

    }
  }
}

void main()
{

  printf("Hello PK\n");
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  display();
  
  
}