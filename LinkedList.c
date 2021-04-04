#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data; 
    struct Node * next;
};

struct Node * Insertatfirst(struct Node * head){
    int value;
    printf("Enter the value u want to insert\n");
    scanf("%d",&value);
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=value;
    ptr->next=head;
    head= ptr;
    printf("\nInsertion Successfull\n");
    return head;
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
    p->next=ptr;
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
    p->next=ptr;
}
struct Node * DeleteFirst(struct Node * head){
    struct Node *p= head;
    head=head->next;
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
    free(q);
}
void display(struct Node * head){
    printf("the linked list is:\n");
    struct Node *p= head;
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}
void main(){
    struct Node * head= NULL;
    char ch='y';
    while (ch=='y')
    {
        printf("LINKED LIST IMPLEMENTATION\n");
        printf("MAIN MENU\n1.Insert At Beginning\n2.Insert at Index\n3.Insert at End\n4.Delete first\n5.Delete at End\n6.Delete at Index\n7.Delete particular Value\n8.Display\n");
        int n;
        printf("Enter your choice:\n");
        scanf("%d",&n);
        switch (n)
        {  
        case 1:
            head=Insertatfirst(head);
            break;
        case 2:
            Insertatindex(head);
            break;  
        case 3:
            Insertatend(head);
            break;
        case 4:
            head=DeleteFirst(head);
            break;
        case 5:
            Deleteatend(head);
            break;
        case 6:
            DeleteatIndex(head);
            break;
        case 7:
            DeleteValue(head);
            break;
        case 8:
            display(head);
            break;
        default:
            printf("Wrong Choice Entered\n");
            break;
        }
        printf("Do you want to continue(y/n):\n");
        scanf(" %c",&ch);
    }
    
}