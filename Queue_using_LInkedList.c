#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * front = NULL;
struct Node * rear = NULL;

int IsFull(struct Node *ptr){
    if(ptr==NULL){
        return 1;
    }
    else
    {
        return 0;
    } 
}
int IsEmpty(struct Node * front){
    if(front==NULL){
        return 1;
    }
    else
    {
        return 0;
    }
}
void Enqueue(){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    if(IsFull(ptr)){
        printf("QUEUE OVERFLOW!!\n");
        return;
    }
    int val;
    printf("enter the value you want to insert:\n");
    scanf("%d",&val);
    ptr->data=val;
    if(IsEmpty(front))
    {
        front=ptr;
        rear=ptr;
        rear->next=NULL;
        //front->next=NULL;
    }
    else{
        ptr->next=rear->next;
        rear->next=ptr;
        rear=ptr;
    }
}
void Dequeue(){
    if(IsEmpty(front) || rear->next==front)
    {
       printf("QUEUE UNDERFLOW!!\n");
       return; 
    }
    else
    {
        struct Node *p = front;
        front=front->next;
        int temp = p->data;
        free(p);
        printf("the Element deleted is %d\n",temp);
    }
    
    
}
void display(){
    if(IsEmpty(front) || rear->next==front)
    {
       printf("QUEUE UNDERFLOW!!\n");
       return; 
    }
    else
    {
        printf("The Queue is\n");
        struct Node * p= front;
        while(p!=NULL){
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
    }
    
}
void main(){
    display();
    Enqueue();
    Enqueue();
    Enqueue();
    display();
    Dequeue();
    display();
    Dequeue();
    display();
    Dequeue();
    display();
}