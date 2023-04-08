#include<stdio.h>

void printarray(int a[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}

void bubblesort(int a[], int n)
{
    int i, pass, temp;
    for ( pass = 0; pass < n-1; pass++)
    {
        printf("Working on pass number %d\n", pass+1);
        for ( i = 0; i < n-1-pass; i++)
        {
            if (a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

int main()
{
    int i,n,a[100];
    printf("How many numbers :");
    scanf("%d",&n);
    printf("\n Enter the unsorted element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\t",&a[i]);
    }
    bubblesort(a,n);
    printarray(a,n);
    return 0;
}