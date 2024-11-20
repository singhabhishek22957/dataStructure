#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

Node *create_node(Node *head, int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL)
  {
    return newNode;
  }

  Node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = newNode;

  return head;
}

Node *insertIndexNumber(Node *head, int data, int index)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  Node *temp = head;
  int i = 0;
  while (temp->next!=NULL)
  {
    if (i == index - 1)
    {
      newNode->next = head->next;
      temp->next = newNode;
      break;
    }
    i++;
    
    temp = temp->next;
  }

  return head;
}

// void display(Node *head){
//   printf("%d\n",head->data);
//   while (head->next==NULL){
//     printf("%d\n",head->data);
//     head = head->next;
//   }

// Function to display the linked list
void display(Node *head)
{
  Node *temp = head; // Start from the head node
  while (temp != NULL)
  {
    printf("%d \t", temp->data); // Print the current node's data
    temp = temp->next;           // Move to the next node
  }
  printf("\n"); // Indicate the end of the list
}

void main()
{

  printf("Single Link List\n");
  Node *head = NULL;
  head = create_node(head, 56);
  head = create_node(head, 45);
  display(head);
  head = insertIndexNumber(head, 78, 1);
  head = insertIndexNumber(head, 79, 2);
  display(head);
}