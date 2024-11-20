#include<stdio.h>
#include<malloc.h>

typedef struct Node{
  int data;
  struct Node* next;
}Node;


void display(Node* head){
  if(head==NULL){
    printf("List is empty\n");
  }

  while (head!=NULL){
    printf("%d-> ", head->data);
    head = head->next;

  }
  printf("NULL\n");
  


}

int main(){

  Node* first = (Node*)malloc(sizeof(Node));
  Node* second = (Node*)malloc(sizeof(Node));
  Node* third = (Node*)malloc(sizeof(Node));
  Node* fourth = (Node*)malloc(sizeof(Node));
  Node* fifth = (Node*)malloc(sizeof(Node));

  first->data=89;
  first->next = second;

  second->data=78;
  second->next = third;

  third->data=56;
  third->next = fourth;

  fourth->data=45;
  fourth->next = fifth;

  fifth->data=12;
  fifth->next = NULL;


  display(first);





  return 0;
}