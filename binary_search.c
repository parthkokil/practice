#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int binarysearch(int arr[], int n, int element){
    int low, mid,high;
    low =0;
    high = n-1;
    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        else if (arr[mid]>element)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
    
}
int main(){
    int arr[]={1,22,33,44,55,66,77,88,99,1001},element = 99;
    int n = sizeof(arr)/sizeof(arr[0]);
    // printf("How many elements ?\n");
    // scanf("%d",&n);
    // printf("Enter array elements in sorted order :\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    printf("Elements in array are:\n");
    display(arr,n);
    // printf("Enter the element you want to search in an array :\n");
    // scanf("%d",&element);
    int index = binarysearch(arr,n,element);
    printf("The element %d found at position %d in an array.\n",element,index+1);
    
    return 0;
}