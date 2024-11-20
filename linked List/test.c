#include <stdio.h>
#include <stdlib.h>


struct node{
  int data;
  struct node* next;
};

void printList(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

void main()
{
  printf("Hello, World!\n");
  struct node* head = (struct node*) malloc(sizeof(struct node));
  struct node* second = (struct node*) malloc(sizeof(struct node));
  struct node* third = (struct node*) malloc(sizeof(struct node));
  head->data = 1;
  head->next = second;
  second->data = 3;
  second->next = third;
  third->data = 4;
  third->next = NULL;



  // Function to print the linked list

}

    
}