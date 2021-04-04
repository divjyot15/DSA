#include<stdio.h>
#include<stdlib.h>
void insert(int arr[],int n){
    int b,index;
    printf("enter the element you want to insert:\n");
    scanf("%d",&b);
    printf("enter the index you want to insert the element at:\n");
    scanf("%d",&index);
    for (int i = n-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=b;
    n=n+1;
    printf("the array after insertion is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]); 
    } 
}
void deletion(int arr[],int n){
    int index;
    printf("enter the index value where you want to delete:\n");
    scanf("%d",&index);
    for (int i = index; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("the array after the deletion is:\n");
    for (int i = 0; i < n; i++)
    {
         printf("%d ",arr[i]); 
    }
}
void l_search(int arr[],int n){
    int ele,i;
    printf("enter the element you want to search for:\n");
    scanf("%d",&ele);
    for (i = 0; i < n; i++)
    {
        if(arr[i]==ele)
        {
            //index=i;
            break;
        }
    }
    if(i<n){
        printf("the element is found at index %d",i);
    }
    else{
        printf("\nElement not found in array\n");
    }
    
}
void main(){
    int n;
    printf("enter the number the elements you want the array to contain\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    char ch= 'y';
    while(ch =='y'){
        printf("\n***************");
        printf("\nMAIN MENU:\n1.Insertion\n2.Deletion\n3.Linear Search\n4.Exit");
        printf("\n***************\n");
        printf("enter your choice:\n");
        int choice;
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert(arr,n);
            break;
        case 2:
            deletion(arr,n);
            break;
        case 3:
            l_search(arr,n);
            break;
        case 4:
            exit(0);
            break;
        default:printf("Invalid Choice");
            break;
        }
        printf("\nDo you want to continue?(y/n):\n");
        scanf(" %c",&ch);
    }

}