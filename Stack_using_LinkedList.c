#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
int IsFull(struct Node *ptr){
    if(ptr==NULL){
        return 1;
    }
    else
    {
        return 0;
    } 
}
int IsEmpty(struct Node * top){
    if(top==NULL){
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node * push(struct Node * top){
    int value;
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    printf("enter the value you want to insert:\n");
    scanf("%d",&value);
    if (IsFull(ptr))
    {
        printf("The stack is Full\n");
    }
    else
    {
        ptr->data=value;
        ptr->next=top;
        top=ptr;
    }
    printf("value pushed succesfully\n");
    return top;
}
void display(struct Node * top){
    if (top==NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("The stack is \n");
        struct Node *p =top;
        while(p!=NULL){
            printf("%d\n",p->data);
            p=p->next;
        }
    }
    
}
struct Node * pop(struct Node* top){
    if (IsEmpty(top))
    {
        printf("the stack is empty\n");
    }
    else
    {
        struct Node * temp=top;
        int x=top->data;
        top=top->next;
        free(temp);
        printf("The element popped is:%d",x);
   }
    return top;
}
void peek(struct Node * top){
    int index;
    printf("Enter the index at which you want the value:\n");
    scanf("%d",index);
    struct Node * p= top;
    for (int i = 0; i <= index; i++)
    {
        p=p->next;
    }
    if(p==NULL){
        printf("the given index does not exist\n");
    }
    else
    {
        printf("The value at given index is: %d",p->data);
    } 
}
int stackTop(struct Node * top){
    return top->data;
}
int stackBottom(struct Node * top){
    struct Node *p=top;
    while(p->next!=NULL){
        p=p->next;
    }
    return p->data;
}
void main(){
    struct Node * top=NULL;
    top=push(top);
    display(top);
    top=push(top);
    display(top);
    top=push(top);
    display(top);
    //top=pop(top);
    peek(top);
}