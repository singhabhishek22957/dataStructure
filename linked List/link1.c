#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int data ;
  struct node *next;
}Node;


void displays(Node *ptr){
  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->next;
  }
}

void main()
{

  printf("Linked First\n");

  // create a variable 
  Node * head;
  Node * second;
  Node * third;
  Node * fourth;

//  allocating a memory;
  head = (Node*)malloc(sizeof(Node));
  second = (Node*)malloc(sizeof(Node));
  third = (Node*)malloc(sizeof(Node));
  fourth = (Node*)malloc(sizeof(Node));

  // store data in these variable ;
  head->data = 1;
  (*second ).data= 25;
  third->data = 3;
  fourth->data=345;
  
  // link these data; together and make a linked list ; 
  head->next = second ;
  second->next = third ;
  third->next= fourth;
  fourth->next= NULL;


  displays(head);
}

Node *insertMeddle(Node *head,int data,int index){
  Node *newNode = (Node*)malloc(sizeof(Node*));
  Node *temp = head;
  // insert address in previous node of new Node address
  head->next=newNode;
  //insert address data into newNode whose are present in previous node
  newNode->next=temp;
  // insert data in a node
  newNode->data=data;
  return newNode;
}