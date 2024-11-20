#include <stdio.h>

const int max = 10;
int arr[10];
int top;
int rear = -1;
int front = -1;

void push(int data){
  if(rear==max-1){
    printf("Queue is full\n");
  }else{
    rear++;
    arr[rear] = data;
  }

  if(front==-1){
    front = 0;

  }
}

void pop(){
  if(front==-1){
    printf("Queue is empty\n");
  }else{ 
    printf("Popped element is %d\n",arr[front]);
    front++;
  }
}

void display(){
  if(front==-1){
    printf("Queue is empty\n");
  }else{
    for(int i = front;i<=rear;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
  }
}

void main()
{

  printf("Hello Duniya\n");

  push(45);
  push(47);
  push(89);
  push(65);
  pop();
  push(23);
  display();
  
  
}