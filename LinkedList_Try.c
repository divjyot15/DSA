#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void linkedlistTraversal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("\nElement: %d",ptr->data);
        ptr=ptr->next;
    }
    
}
struct Node * InsertatBeg(struct Node *head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head= ptr;
    return head;
}
struct Node * InsertatIndex(struct Node *head,int data,int index){
     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
     struct Node * p = head;
     int i=0;
     
     while(i!=index-1){
         p=p->next;
         i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;
}
struct Node * InsertatEnd(struct Node *head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p= head;
    while (p->next!= NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next= NULL;
    p->next=ptr;
    return head;
}
struct Node * InsertafterNode(struct Node *head,struct Node * prevNode,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
struct Node * Deletefirst(struct Node * head){
    struct Node * ptr = head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node * DeleteAtEnd(struct Node * head){
    struct Node *p = head->next;
    struct Node *q = head;
    while (p->next!= NULL)
    {
        p=p->next;
        q=q->next;
    }
    q->next=NULL;
    free(p);
    return head;
}
struct Node * DeleteAtIndex(struct Node * head,int index){
    struct Node *p= head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    struct Node * q=p->next;
    p->next= q->next;
    free(q);
    return head;
}
struct Node * DeleteValue(struct Node * head,int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!= value){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node *));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node *));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node *));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node *));
    
    head->data =1;
    head->next= second;
    second->data =2;
    second->next= third;
    third->data =3;
    third->next= fourth;
    fourth->data =4;
    fourth->next= NULL;
    

    linkedlistTraversal(head);
    head = DeleteValue(head,2);
    linkedlistTraversal(head);
}