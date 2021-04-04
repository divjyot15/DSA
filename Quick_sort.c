#include<stdio.h>
#include<stdlib.h>

void Quicksort(int arr[],int n){
    for (int i = 1,j=n-1; i<=j; i++,j--)
    {
        if (arr[0]<arr[i])
        {
            break;
        }
        if (arr[0]>=arr[j])
        {
            
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
    QuickSort(arr,n);
    printf("\n");
    printf("The array after sorting is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}