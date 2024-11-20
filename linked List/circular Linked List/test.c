#include <stdio.h>


typedef struct Node{
  int data;
  struct Node *next;
}Node;

Node * create_node(int data){
  Node *new_node = (Node*)malloc(sizeof(Node));
  new_node->data=data;
  new_node->next=NULL;
}

Node*add_start(Node*head,int data){
  Node*new_node=create_node(data);
  if(head==NULL){
    new_node->next=new_node;
    return new_node;

  }
  new_node->next=head;
  Node*temp = head;
  while(temp->next!=head){
    temp=temp->next;
  }
  temp->next=new_node;
  return head;
}


void display(Node*head){
  if(head==NULL){
    printf("List is empty\n");    
  }

  do{
    printf("%d\t",head->data);
    head=head->next;
  }while (head->next!=head);
  
}
void main()
{

  printf("Hello, World!\n");

  Node* head = NULL;
  head = add_start(head, 10);
  head = add_start(head, 20);
  head = add_start(head, 30);
  display(head);

  
}