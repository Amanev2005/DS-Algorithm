#include<stdio.h>
void main()
{
    int i,n,x;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("Element found");
            break;
        }
    }
    if(a[i]!=x)
    {
        printf("Element not found");
    }
}