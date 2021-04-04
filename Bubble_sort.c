#include<stdio.h>
#include<stdlib.h>

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
    //BUBBLE SORTING BEGINS 
    for (int i = 0; i < n; i++)
    {
        int isSorted=1;//this is for making Bubble Sort adaptive
        for (int j = 0; j < n-i-1; j++)
        {

            if(arr[j]>arr[j+1]){
                int temp = arr[j]; 
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted){
            break;
        }
    }
    //BUBBLE SORTING ENDS
    printf("The array after sorting is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}