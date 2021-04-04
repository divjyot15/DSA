#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};

void preOrder(struct Node * root){
    if (root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}
void postOrder(struct Node * root){
    if (root!=NULL)
    { 
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inorder(struct Node * root){
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
  
struct Node * create_Node(int data){
    struct Node * n= (struct Node * )malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void main(){
    struct Node * root = create_Node(10);
    struct Node * p1 = create_Node(2);
    struct Node * p2 = create_Node(5);
    struct Node * p3 = create_Node(7);
    struct Node * p4 = create_Node(8);

    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;

    /*
    so the tree will be like
            10
           /  \
          2    5 
         / \
        7   8
    */

    inorder(root); 
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);

}