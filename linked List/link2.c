#include <stdio.h>


typedef struct{
  int data;
  struct node *next;
} Node;

display(Node *head){
  while(head!=NULL){
    printf("%d ", head->data);
    head = head->next;

  }
  printf("\n");
}

Node *insertAtBegin(Node *head,int data){
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = head;  
  return newNode;
}
// Node *insertMeddle(Node *head,int data,int index){
//   Node *newNode = (Node*)malloc(sizeof(Node*));
//   int i = 0;
//   Node *prev_ptr;
//   while(i!=index-1){
//     prev_ptr =head->next;
//     i++;    
//   }
  
//   Node *temp = head;
//   // insert address in previous node of new Node address
//   head->next=newNode;
//   //insert address data into newNode whose are present in previous node
//   newNode->next=temp;
//   // insert data in a node
//   newNode->data=data;
//   return newNode;
// }

// Node *insertMeddle(Node *head,int data,Node  *prev){
//   Node *newNode = (Node*)malloc(sizeof(Node));
//   Node *temp = newNode;
//   // insert address in previous node of new Node address
//   newNode->next=prev->next;
//   //insert address data into newNode whose are present in previous node
//   prev->next=temp;
//   // insert data in a node
//   newNode->data=data;
//   return head;
// }

void insertAbhiStyle(Node *head,int data){
  Node *newNode = (Node*)malloc(sizeof(Node));
  Node *temp = newNode;
  // insert address in previous node of new Node address
  newNode->next=head->next;
  //insert address data into newNode whose are present in previous node
  head->next=temp;
  // insert data in a node
  newNode->data=data;
}


void insertWhere(Node *head,int data,int where){

  // while(1){
  //   if(head->data==where){
  //     insertAbhiStyle(head,data);
  //     return;
  //   }
  //   if(head->next==NULL){
  //     printf("Data is found");
  //     return;
  //   }
  //   head=head->next;
  // }
   while (head != NULL) {
        if (head->data == where) {
            insertAbhiStyle(head, data);
            return;
        }

        if (head->next == NULL) {
            printf("Data %d not found in the list.\n", where);
            return;
        }

        head = head->next;
    }
  
}



void main()
{

  printf("Insertion in linked list \n");

  Node * first;
  Node * second;
  Node * third;
  Node * fourth;
  Node * fifth;

  first = (Node *)malloc(sizeof(Node));
  second = (Node *)malloc(sizeof(Node));
  third = (Node *)malloc(sizeof(Node));
  fourth = (Node *)malloc(sizeof(Node));
  fifth = (Node *)malloc(sizeof(Node));


  first->data=1;
  second->data=2;
  third->data=3;
  fourth->data=4;
  fifth->data=5;


  first->next = second;
  second->next = third;

  third->next = fourth;
  fourth->next = fifth;
  fifth->next = NULL;


  display(first);

  printf("Data Add At Begin \n");

  
//  insertAbhiStyle(first,45);
//  insertAbhiStyle(first,46);
//  insertAbhiStyle(first,48);
//  insertAbhiStyle(fifth,45);

  Node *head=insertAtBegin(first,56);
 
  display(head);
  insertWhere(head,467,56);
  insertWhere(head,467,5);
  insertWhere(head,444,4);
  display(head);


  
}