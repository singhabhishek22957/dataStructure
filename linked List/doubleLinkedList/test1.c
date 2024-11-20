#include <stdio.h>

typedef struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
}Node;


void display(Node*head){
  if(head==NULL){
    printf("List is empty");
    return;
  }
  while (head!=NULL){
    printf("%d ",head->data);
    head=head->next;
  }
  

}

void main()
{

  printf("Hello Abhishek\n");
  Node * first = (Node*)malloc(sizeof(Node));
  Node * second = (Node*)malloc(sizeof(Node));
  Node * third = (Node*)malloc(sizeof(Node));
  Node * fourth = (Node*)malloc(sizeof(Node));
  Node * fifth = (Node*)malloc(sizeof(Node));

  first->data=1;
  second->data=2;
  third->data=3;
  fourth->data=4;
  fifth->data=5;

  // linked item
  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=NULL;

  // linked item 
  first->prev=NULL;
  second->prev=first;
  third->prev=second;
  fourth->prev=third;
  fifth->prev=fourth;

  display(first);
}