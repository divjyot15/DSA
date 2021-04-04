#include<stdio.h>
#include<stdlib.h>

struct DEqueue
{
    int *arr;
    int size;
    int front;
    int rear;
};

int isFull(struct DEqueue * dq){
    if (dq->rear==dq->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct DEqueue * dq){
    if(dq->front==-1){
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void EnqueueR(struct DEqueue * dq){
    if (isFull(dq))
    {
        printf("QUEUE OVERFLOW!!\n");
        return;
    }
    int val;
    printf("Enter the value you want to insert:\n");
    scanf("%d",&val);
    if (isEmpty(dq))
    {
        dq->front=0;
        dq->rear=0;
        dq->arr[0]=val;
    }
    else
    {
        dq->rear++;
        dq->arr[dq->rear]=val;
    }
}
void DequeueF(struct DEqueue * dq){
    if(isEmpty(dq) || dq->front>dq->rear)
    {
        printf("Queue Underflow!!\n");
    }
    else if (dq->front==0 &&  dq->rear==0)
    {
        int temp= dq->arr[dq->front];
        dq->front=-1;
        dq->rear=-1;
        printf("The Element deleted is %d\n",temp);
    }
    
    else
    {
        int temp= dq->arr[dq->front];
        dq->front++;
        printf("The Element deleted is %d\n",temp);
    }
}

void EnqueueF(struct DEqueue * dq){
    if(dq->front==0){
        printf("QUEUE OVERFLOW!!\n");
        return;
    }
    int val;
    printf("Enter the value you want to insert:\n");
    scanf("%d",&val);
    if (isEmpty(dq))
    {
        dq->front=0;
        dq->rear=0;
        dq->arr[0]=val;
    }
    else
    {
        dq->front--;
        dq->arr[dq->front]=val;
    }
}

void DequeueR(struct DEqueue * dq){
    if(isEmpty(dq) || dq->front>dq->rear)
    {
        printf("Queue Underflow!!\n");
    }
    else if (dq->front==0 &&  dq->rear==0)
    {
        int temp= dq->arr[dq->front];
        dq->front=-1;
        dq->rear=-1;
        printf("The Element deleted is %d\n",temp);
    }
    
    else
    {
        int temp= dq->arr[dq->rear];
        dq->rear--;
        printf("The Element deleted is %d\n",temp);
    }
}

void display(struct DEqueue * dq){
    if (isEmpty(dq) || dq->front>dq->rear)
    {
        printf("QUEUE UNDERFLOW!!\n");
    }
    else
    {
        printf("The queue is :\n");
        for (int i = dq->front; i <=dq->rear; i++)
        {
            printf("%d ",dq->arr[i]);
        }
        printf("\n");
    }  
}
void main(){
    struct DEqueue * dq = (struct DEqueue *)malloc(sizeof(struct DEqueue));
    printf("Enter the size of Queue:\n");
    scanf("%d",dq->size);
    dq->arr=(int *)malloc(dq->size*sizeof(int));
    dq->front=-1;
    dq->rear=-1;
    display(dq);
    EnqueueR(dq);
    EnqueueR(dq);
    EnqueueR(dq);
    EnqueueR(dq);
    display(dq);
    DequeueF(dq);
    DequeueF(dq);
    EnqueueF(dq);
    EnqueueF(dq);
    display(dq);
    DequeueR(dq);
    DequeueR(dq);
    DequeueR(dq);
    DequeueR(dq);
    DequeueR(dq);
    display(dq);
}