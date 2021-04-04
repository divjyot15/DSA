#include<stdlib.h>
#include<stdio.h>
int main(){
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
    int ele;
    printf("\nEnter the element you want to search for:\n");
    scanf("%d",&ele);
    int beg=0,end=n-1;
    int mid,f=0;
    while(beg<=end){
        mid= (beg+end)/2;
        if(ele==arr[mid]){
            f=1;
            break;
        }
        else if(ele>arr[mid]){
            beg=mid+1;   
        } 
        else if(ele<arr[mid]){
            end=mid-1;   
        }
    }
    if (f==1)
    {
        printf("element at index %d",mid);
    }
    else
    {
        printf("Element not Found");
    }
    
}