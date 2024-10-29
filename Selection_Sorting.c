#include<stdio.h>
void sort(int a[],int n)
{
      int i,j,min, temp;
      for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
              min=j;  
            }
            
        }
        if(min!= i)
        {
        int temp=0;
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        }
    }
}
int main()
{
    int i,n;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a,n);
        printf("Sorted Array=");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    
    return 0;
}