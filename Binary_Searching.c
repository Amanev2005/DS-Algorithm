#include<stdio.h>
void main(){
    int n,i,j,x,temp=0,low,mid,high;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    low=a[0];
    high=a[n-1];
    mid=(low+high)/2;
    printf("Enter the searching element");
    scanf("%d",&x);
    for(i=low; i<high;i++)
    {
        if(x==a[mid])
        {
            printf("Element Found");
            break;
        }
        if(x>a[mid])
        {
            low= mid+1;

        }
        if(x<a[mid])
        {
            high=mid-1;
        }
    }
    if(a[mid]!x)
    {
        printf("Element not found");
    }

}