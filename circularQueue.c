#include<stdio.h>
#include<stdlib.h>
struct CQueue
{
    int front;
    int rear;
    int size;
    int * arr;
};

int isFull(struct CQueue *q){
    if ((q->rear+1)%q->size==q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
int isEmpty(struct CQueue *q){
    if (q->front==-1 && q->rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void Enqueue(struct CQueue *q){
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
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=val;
    }
    printf("Value Inserted Successfully\n");
    
}
void Dequeue(struct CQueue *q){
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
        q->front=(q->front+1)%q->size;
        printf("The Element deleted is %d\n",temp);
    }
}
void display(struct CQueue *q){
    if (isEmpty(q))
    {
        printf("No element in Queue\n");
        return;
    }
    else if (q->rear >= q->front) 
    {
        printf("The circular queue is\n"); 
        for (int i = q->front; i <= q->rear; i++) 
            printf("%d ",q->arr[i]); 
    } 
    else
    { 
        printf("The circular queue is\n");
        for (int i = q->front; i < q->size; i++) 
            printf("%d ", q->arr[i]); 
  
        for (int i = 0; i <=q->rear; i++) 
            printf("%d ", q->arr[i]); 
    } 
    printf("\n");
}
void main(){
    struct CQueue * q= (struct CQueue *)malloc(sizeof(struct CQueue));
    q->front=-1;
    q->rear=-1;
    q->size=10;
    q->arr=(int *)malloc(q->size*sizeof(int));
    display(q);
    Enqueue(q);
    display(q);
    Enqueue(q);
    Enqueue(q);
    Dequeue(q);
    Enqueue(q);
    Enqueue(q);
    Enqueue(q);
    Enqueue(q);
    Enqueue(q);
    Enqueue(q);
    Enqueue(q);
    Enqueue(q);
    display(q);
}