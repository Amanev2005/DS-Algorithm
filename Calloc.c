#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n,i;
    printf("Enter the elements:");
    scanf("%d",&n);
    arr=(int*) calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("Error");
    }
    printf("enter the array elements");
    for(i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}