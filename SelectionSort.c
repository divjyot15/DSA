#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int IndexOfMin=i;
        int min=arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[IndexOfMin]>arr[j+1])
            {
                min=arr[j+1];
                IndexOfMin=j+1; 
            } 
        }
        int temp= arr[i];
        arr[i]=min;
        arr[IndexOfMin]=temp;
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
    SelectionSort(arr,n);
    printf("\n");
    printf("The array after sorting is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}