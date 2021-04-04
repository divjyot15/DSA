#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int data){
    struct Node * new = (struct Node *)malloc(sizeof(struct Node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
}



void main(){
    struct Node * root = create_Node(10);
    struct Node * p1 = create_Node(7);
    struct Node * p2 = create_Node(11);
    struct Node * p3 = create_Node(2);
    struct Node * p4 = create_Node(8);

    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;

    /*
    so the tree will be like
            10
           /  \
          7   11 
         / \
        2   8
    */
   
}