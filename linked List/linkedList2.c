#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct Node{
  int data;
  struct Node *next;
} Node;

// Create a node
Node *create_node(int data)
{
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

// add item at start
Node *add_start(Node *head, int data)
{
  Node *new_node = create_node(data);
  if (head == NULL)
  {
    return new_node;
  }

  new_node->next = head;
  return new_node;
}

// add item at end
Node *add_end(Node *head, int data)
{
  Node *new_node = create_node(data);
  if (head == NULL)
  {
    return new_node;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = new_node;
  return head;
}

// add item at random
Node *add_index(Node *head, int data, int index)
{
  Node *new_node = create_node(data);
  if (head == NULL)
  {
    return new_node;
  }

  if (index == 0)
  {
    return add_start(head, data);
  }

  Node *temp = head;
  int i = 0;
  while (temp->next != NULL && i < index - 1)
  {
    temp = temp->next;
    i++;
  }
  if (temp != NULL)
  {
    new_node->next = temp->next;
    temp->next = new_node;
  }
  else
  {
    printf("Index out of bounds");
  }

  return head;
}

// search function 
void search(Node *head, int key){
  Node *temp = head;
  int index = 0;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      printf("%d found at index %d\n", key, index);
      return;
    }
    index++;
    temp = temp->next;
  }
  printf("Element %d is not found\n",key);
}

// delete item at end 
Node *delete_end(Node *head)
{
  if (head == NULL)
  {
    printf("List is Empty\n");
    return NULL;
  }

  if (head->next == NULL)
  {
    free(head);
    return NULL;
  }

  Node *temp = head;
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }
  free(temp->next);
  temp->next = NULL;
  return head;
}

// delete item at start
Node *delete_start(Node *head)
{
  if (head == NULL)
  {
    printf("List is Empty\n");
    return NULL;
  }

  Node *temp = head;
  head = head->next;
  free(temp);
  return head;
}

// delete item using index 
Node *delete_index(Node *head, int index)
{

  if (head == NULL)
  {
    printf("List is Empty\n");
    return NULL;
  }

  if (index == 0)
  {
    return delete_start(head);
  }

  Node *temp = head;
  int i = 0;
  while (temp->next != NULL && i < index - 1)
  {
    temp = temp->next;
    i++;
  }
  if (temp->next == NULL)
  {
    printf("Index out of range\n");
    return head;
  }
  Node *node_to_delete = temp->next;
  temp->next = temp->next->next;
  free(node_to_delete);
  return head;
}

// display function 
void display(Node *head)
{
  if (head == NULL)
  {
    printf("List is Empty\n");
  }

  while (head != NULL)
  {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");

}

// update item at start position;
Node *update_start(Node *head,int data){
  if(head==NULL){
    printf("List is Empty\n");
    return NULL;
  }else{
    head->data=data;
    return head;
  }
  
}

// update item at start position;
Node *update_key(Node *head,int old_data,int new_data){
  if(head==NULL){
    printf("List is Empty\n");
    return NULL;
  }
  Node*temp =head;
  while(temp!=NULL){
    if(temp->data==old_data){
      temp->data=new_data;
      return head;
    }
    temp=temp->next;

  }
  if(temp==NULL){
    printf("Data is not found \n");
    return head;
  }

  
  
}

//update item at end;
Node *update_end(Node *head,int data){
  if(head==NULL){
    printf("List is Empty\n");
    return NULL;
  }
  if(head->next==NULL){
    head->data=data;
    return head;
  }
  Node*temp = head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->data = data;
  return head;
  
}

//update item at 
Node *update_index(Node *head,int data,int index){
  if(head==NULL){
    printf("List is Empty\n");
    return NULL;
  }
  if(head->next==NULL){
    head->data=data;
    return head;
  }

  Node*temp = head;
  int i = 0;
  while(temp->next!=NULL&&i<index-1){
    temp = temp->next;
    i++;
  }
  if(temp->next==NULL){
    printf("Index out of range\n");
    return head;
  }else{
    temp->next->data=data;
    return head;
  }
  
}

void main(){

  printf("Linked List 2\n");
  printf("------------\n");

  Node *head = NULL; 

  // Add nodes at the end
  head = add_end(head, 10);
  head = add_end(head, 20);
  head = add_end(head, 30);
  display(head); 

 
  head = add_start(head,78);
  head = add_start(head,45);
  head = add_start(head,12);
  head = add_start(head,100);
  head = add_start(head,89);
  display(head);

  head = add_index(head,456,2);
  display(head);
  search(head,1001);
  head = delete_index(head,2);
  display(head);
  head= delete_end(head);
  display(head);
  printf("Nothing\n");
  head = delete_start(head);
  display(head);
  head= update_start(head,1001);
  printf("Updated data \n");
  display(head);
  head= update_index(head,1001,3);
  printf("Updated data \n");
  display(head);
  head= update_end(head,21);
  printf("Updated data \n");
  display(head);
  head= update_key(head,12,1212);
  printf("Updated data \n");
  display(head); 
}

