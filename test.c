#include<stdio.h>
void main(){

  printf("Enter your name ");
  char name[50];
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);
    
}