#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
};

struct Node * Insertatfirst(struct Node * head){
    int value;
    printf("Enter the value u want to insert\n");
    scanf("%d",&value);
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=value;
    ptr->next=head;
    ptr->prev=NULL;
    head= ptr;
    printf("\nInsertion Successfull\n");
    return head;
}
struct Node * Insertatend(struct Node * head){
    int value;
    printf("Enter the value u want to insert");
    scanf("%d",&value);
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p =head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=value;
    ptr->next=NULL;
    ptr->prev=p;
    p->next=ptr;
}
struct Node * Insertatindex(struct Node * head){
    int value,index;
    printf("Enter the value u want to insert");
    scanf("%d",&value);
    printf("Enter the index at which u want to insert");
    scanf("%d",&index);
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p =head;
    for (int i = 0; i <= index-1; i++)
    {
        p=p->next;
    } 
    ptr->data=value;
    ptr->next=p->next;
    ptr->prev=p;
    p->next=ptr;
}

void display(struct Node * head){
    printf("The doubly linked list is:\n");
    struct Node * p=head;
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
struct Node * DeleteFirst(struct Node * head){
    struct Node *p= head;
    head=head->next;
    head->prev=NULL;
    free(p);
    return head;
}
struct Node * Deleteatend(struct Node * head){
    struct Node * p=head;
    struct Node * q= head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}
struct Node * DeleteatIndex(struct Node * head){
    int index;
    printf("Enter the Index at which you want to delete\n");
    scanf("%d",&index);
    struct Node *p= head;
    struct Node *q= head->next;
    int i=0;
    while (i!=index-1)
    {
        i++;
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    struct Node * r= q->next;
    r->prev=p;
    free(q);  
}
struct Node * DeleteValue(struct Node * head){
    int val;
    printf("Enter the value you want to delete\n");
    scanf("%d",&val);
    struct Node *p= head;
    struct Node *q= head->next;
    while (q->data!=val)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    struct Node * r= q->next;
    r->prev=p;
    free(q);
}
void main(){
    struct Node * head = NULL;
    head=Insertatfirst(head);
    display(head);
    Insertatend(head);
    display(head);
    Insertatindex(head);
    display(head);
    head=DeleteFirst(head);
    display(head);
}
