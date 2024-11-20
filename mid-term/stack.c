#include <stdio.h>

int top = -1;
const int max = 10;
int number[10];

int isFull(){
  if(top>=10){
    return 1;
  }else{
    return 0;
  } 
}

int isEmpty(){
  if(top<0) return 1;
  else return 0;
}

void push(int data){
  if(isFull()){
    printf("Stack Overflow\n");
  }else{
    top++;
    number[top]=data;
  }
}
void pop(){
  if(isEmpty()){
    printf("Stack is empty\n");
  }else{
    top--;
    
  }
}

void peek(){
  if(isEmpty()){
    printf("Stack is empty\n");
  }else{
    printf("Top Element: %d\n",number[top]);
  }
}

void display(){
  if(isEmpty){
    printf("Stack is empty\n");
  }else{
    for(int i=top;i>=0;i--){
      printf("%d\n",number[i]);
    }
  }
}

void main()
{

  printf("Hello Abhishek You are Inter in stack \n");

  push(19);
  push(98);
  push(15);
  push(23);
  push(78);
  push(45);
  display();
  
}