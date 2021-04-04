#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    char data;
    struct Node * next;
};
int isFULL(struct Node *ptr){
    if (ptr==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Node * top){
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

struct Node * push(struct Node * top,char c){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=c;
    ptr->next=top;
    top=ptr;
    return top;
}
struct Node * pop(struct Node * top){
    struct Node * p=top;
    top=top->next;
    free(p);
    return top;
}
void main(){
    struct Node * top=NULL;
    char s[100];
    printf("Enter the string in which you want to perform paranthesis matching:\n");
    scanf(" %s",s);
    printf("The string you entered is \n %s\n",s);
    int l= strlen(s);
    printf("The length of string is: %d\n",l);
    for (int i = 0;i < l; i++)
    {
        if(s[i]=='('){
            top=push(top,s[i]);
        }
        else if (s[i]==')')
        {
            if(isEmpty(top)){
                printf("UNBALANCED PARANTHESIS\n");
                return;
            }
            else
            {
                top=pop(top);
            } 
        }   
    }
    if(isEmpty(top))
    {
        printf("BALANCED PARANTHESIS\n");
    }
    else{
        printf("UNBALANCED PARANTHESIS\n");        
    }
    
}