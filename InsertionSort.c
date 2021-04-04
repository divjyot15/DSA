#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j]>=arr[j-1])
            {
                break;
            }
            else
            {
                int temp= arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            
            
   
        }   
    }
}

void main(){
    int n;
    printf("Enter the size of Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array that you want to sort:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array you entered is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    InsertionSort(arr,n);
    printf("The array after sorting is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}