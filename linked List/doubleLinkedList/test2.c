#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{
  struct Node * prev;
  int data ;
  struct Node * next ;
}Node;

// create a node
Node *create_node(int data){
  Node *new_node = (Node*)malloc(sizeof(Node));
  new_node->data = data ;
  new_node->prev = NULL ;
  new_node->next = NULL ;
  return new_node ;
}

// add a add node at starting position
Node *add_start(Node *head, int data)
{
  Node *new_node = create_node(data);
  if (head == NULL)
  {
    return new_node;
  }

  new_node->next = head;
  head->prev = new_node ;
  return new_node;
}

// add a node at end positing
Node *add_end(Node *head, int data)
{
  Node *new_node = create_node(data);
  if (head == NULL)
  {
    return new_node;
  }

  Node *temp = head;

  while(temp->next!=NULL){
    temp = temp->next ;
  }
  temp->next = new_node ;
  new_node->prev = temp ;
  new_node->next=NULL;
  return head;
}

//update list at start position
Node *update_start(Node*head , int data){
  if(head==NULL){
    printf("List is Empty");
    return NULL;
  }
  if(head->prev==NULL){
    head->data=data ;
    return head;
  }

  return head;
   
}


//update list at start position
Node *update_index(Node*head , int data,int index){
  if(head==NULL){
    printf("List is Empty");
    return NULL;
  }

  if(index==0){
    return update_start(head,data);
  }


  Node *temp = head;
  int i= 0;
  while(temp->next!=NULL&&i<index){
    temp = temp->next ;
    i++;
  }

  if(temp->next==NULL){
    printf("Index out of range or if you want to update last element then usee update_end() methods\n");
    return head;
  }

  temp->data= data;

  return head;
   
}


//update list at start position
Node *update_end(Node*head , int data){
  if(head==NULL){
    printf("List is Empty");
    return NULL;
  }
  Node * temp = head;
  while (temp->next!=NULL){
    temp = temp->next ;
  }
  
  if(temp->next==NULL){
    temp->data=data ;
    return head;
  }

  return head;
   
}


// add a node at ending position 
Node *add_index(Node *head, int data,int index)
{
  Node *new_node = create_node(data);
  if (head == NULL)
  {
    return new_node;
  }

  if (index==0)
  {
    return add_start(head,data);
  }
  

  Node *temp = head;
  int i = 0 ;
  while(temp->next!=NULL&& i<index-1){
    temp = temp->next ;
    i++;
  }
  if (temp->next==NULL)
  {
    return add_end(head,data);
  }

  new_node->next=temp->next ;
  temp->next = new_node ;
  new_node->prev = temp ;
  new_node->next->prev=new_node;
  
  return head;
}

// delete a node at starting position
Node* delete_start(Node*head){
  if(head==NULL){
    printf("List is Empty");
    return NULL ;

  }

  if(head->next==NULL){
    free(head);
    return NULL ;
  }
  Node*temp = head;
  head=head->next;
  head->prev=NULL;
  free(temp);
  return head ;
  
}


// delete a node at ending position
Node* delete_end(Node*head){
  if(head==NULL){
    printf("List is Empty");
    return NULL ;

  }

  if(head->next==NULL){
    free(head);
    return NULL ;
  }
  Node*temp = head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->prev->next=NULL;
  free(temp);
  return head ;
  
}


// delete a node at index position
Node* delete_index(Node*head,int index){
  if(head==NULL){
    printf("List is Empty");
    return NULL ;

  }

  if(index<0){
    printf("Invalid Index");
  }

  if(index==0){
    return delete_start(head);
  }

  Node*temp = head;
  int i =0;
  while(temp->next!=NULL&&i<index){
    temp=temp->next;
    i++;
  }
  if(temp->next==NULL){
    printf("Index out of range");
  }

  if(temp->prev!=NULL){
    temp->prev->next=temp->next;
  }

  if (temp->next!=NULL){
    temp->next->prev= temp->prev;
  }

  if(temp==head){
    head=temp->next;
  }
  free(temp);
  
  return head ;
  
}


// delete a node using key position
Node* delete_key(Node*head,int key){
  if(head==NULL){
    printf("List is Empty");
    return NULL ;

  }

  Node*temp = head;
  int i =0;
  while(temp->next!=NULL){

    if (temp->data==key){
     return delete_index(head,i);
    }
    
    
    temp=temp->next;
    i++;
  }
  if(temp->next==NULL&&temp->data==key){
    return delete_end(head);
  }else{
    printf("Key %d not found\n",key);
  }
  return head ;
  
}



void display(Node *head){
  if(head==NULL){
    printf("List is empty");
    return ;
  }
  Node *temp = head ;
  while(temp!=NULL){
    printf("%d\t",temp->data);
    temp = temp->next ;
  }
  printf("**End**\n");
}

void main()
{
   printf("Hello Abhishek\n");
  Node * head = NULL;
  head = add_start(head, 10);
  head = add_start(head, 20);
  head = add_start(head, 30);
  head = add_end(head, 30);
  head = add_end(head, 78);
  head = add_end(head, 93);
  head = add_index(head, 40,2);
  display(head);
  head = delete_start(head);
  display(head);
  head = delete_end(head);
  display(head);
  head = delete_index(head,0);
  printf("Head abhi\n");
  display(head);
  head = delete_key(head,100);
  printf("Head abhi 2\n");
  display(head);
  head = update_start(head,789456);
  display(head);
  head = update_end(head,789456);
  display(head);
  head = update_index(head,4561,3);
  display(head);

 
  
}