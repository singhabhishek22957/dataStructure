#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data);

void preOrder(struct node* root);

int main(){

    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(5);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(6);

    // connecting node 
    p->left=p1;
    p->right=p4;
    p1->left = p2;
    p1->right=p3;

    preOrder(p);


return 0;
}

void preOrder(struct node* root){
    if(root!=NULL){
        printf("%d\t",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

struct node* createNode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left= NULL;
    n->right = NULL;
}