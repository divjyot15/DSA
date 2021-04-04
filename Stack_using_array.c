#include<stdlib.h>
#include<stdio.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int Isempty(struct stack *ptr){
    if (ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(struct stack *ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s){
    int val;
    if (IsFull(s))
    {
        printf("Stack Overflow");
    }
    else{
        printf("Enter the value you want to insert:\n");
        scanf("%d",&val);
        s->top++;
        s->arr[s->top]=val;
        printf("value pushed successfully\n");
    }
    
}
void pop(struct stack *s){
    if(Isempty(s)){
        printf("Stack Underflow");
    }
    else
    {
        int temp= s->arr[s->top];
        s->top--;
        printf("the element deleted is %d",temp);
    }
    
}

void display(struct stack *s){
    if (s->top==-1)
    {
      printf("the stack is empty\n");  
    }
    else
    {
         printf("the stack is \n"); 
        for (int i = 0; i <= s->top; i++)
        {
                printf("%d\n",s->arr[i]);
         }
    }
    
    
}
int peek(struct stack * s){
    int index;
    printf("Enter the Index whose value you want\n");
    scanf("%d",&index);
    if(index>s->top){
        printf("The index does not exist");
    }
    else
    {
        return s->arr[index];
    }

}
int main(){
    printf("STACK IMPLEMENTATION\n");
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    char ch='y';
    while (ch=='y')
    {
        printf("Main Menu\n1.Push\n2.Pop\n3.Display\n4.Peek\nExit\n");
        int val,n;
        printf("Enter ur choice:\n");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
                push(s);
                break;
            case 2:
                pop(s);
                break;
            case 3:
                display(s);
                break;
            case 4:
                val=peek(s);
                printf("the value at this index is %d\n",val);
                break;
            case 5:
                exit(0);
                break;        
            default:
                printf("Invalid choice");
                break;
        }
        printf("Do you want to continue(y/n)\n");
        scanf(" %c",&ch);
    }
    
}