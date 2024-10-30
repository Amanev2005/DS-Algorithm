#include<stdio.h>
void swap( int *a, int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a, int lb,int ub)
{
    pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<= pivot)
        {
            start++;
        
        }
        while(a[end]>pivot)
        {
            end--;

        }
        if(start<end)
        {
            swap(a[start], a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
}
void quicksort(a,lb,ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);;
    }
}
void printarray(int a,n)
{
    for (int i=0; i<n;i++)
    {
        printf("%d", &a[i]);
    }
}
int main()
{
    int i,n;
    printf("Enter the limit of the  aaray");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the arrray");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    
    }
    printf("Original Array:\n");
    printarray(a,n);
    quicksort(a,0,n-1);
    printf("Sorted array:\n");
    printarray(a,n);
    return 0;

}