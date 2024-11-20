#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct Node *next;
} Node;

void display(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

Node *insertAtBegin(Node *head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));  // Correct memory allocation
    // if (newNode == NULL) {
    //     printf("Memory allocation failed.\n");
    //     return head;
    // }
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void insertAbhiStyle(Node *head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    // if (newNode == NULL) {
    //     printf("Memory allocation failed.\n");
    //     return;
    // }
    // Insert newNode between head and head->next
    Node *temp;
    temp = head->next;

    newNode->data = data;
    newNode->next = head->next;
    head->next = newNode;
}

void insertWhere(Node *head, int data, int where) {
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

int main() {
    printf("Insertion in linked list\n");

    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));

    // Check if memory allocation failed
    // if (!first || !second || !third || !fourth || !fifth) {
    //     printf("Memory allocation failed.\n");
    //     return -1;
    // }

    // Initial data assignment
    first->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    fifth->data = 5;

    // Link the nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    // Display original list
    display(first);

    printf("Data Added At Begin\n");

    // Insert at the beginning
    Node *head = insertAtBegin(first, 56);
    display(head);

    // Insert after a node with specific data (e.g., after node with data 56)
    insertWhere(head, 467, 56);
    display(head);

    return 0;
}
