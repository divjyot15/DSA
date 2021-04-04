#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int * arr;
};
int isFull(struct Queue * q){
    if (q->rear==q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Queue * q){
    if (q->front==-1 && q->rear==-1)
    {
        return 1;
    }
    else
    {
       return 0;
    }
    
    
}
void Enqueue(struct Queue * q){
    if(isFull(q))
    {
        printf("Queue Overflow!!\n");
        return;
    }
    int val;
    printf("Enter the value that u want to insert in queue:\n");
    scanf("%d",&val);
    if (isEmpty(q))
    {
        q->front=0;
        q->rear=0;
        q->arr[0]=val;
    }
    else
    {
        q->rear++;
        q->arr[q->rear]=val;
    }
    printf("Value Inserted Successfully\n");
}
void Dequeue(struct Queue * q){
    if(isEmpty(q) || q->front>q->rear)
    {
        printf("Queue Underflow!!\n");
    }
    else if (q->front==0 &&  q->rear==0)
    {
        int temp= q->arr[q->front];
        q->front=-1;
        q->rear=-1;
        printf("The Element deleted is %d\n",temp);
    }
    
    else
    {
        int temp= q->arr[q->front];
        q->front++;
        printf("The Element deleted is %d\n",temp);
    }
}
void display(struct Queue * q){
    if (isEmpty(q))
    {
        printf("No element in Queue\n");
    }
    else
    {
        printf("The Queue is:\n");
        for (int i = q->front; i <=q->rear; i++)
        {
            printf("%d\n",q->arr[i]);
        }
    }
    
    
}
void main(){
    struct Queue * q=(struct Queue *)malloc(sizeof(struct Queue));
    q->size=10;
    q->front=-1;
    q->rear=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    display(q);
    Enqueue(q);
    display(q);
    Enqueue(q);
    Enqueue(q);
    display(q);
    Dequeue(q);
    display(q);
}