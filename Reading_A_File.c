#include<stdio.h>
#include<string.h>
void main(){
    FILE*fptr;
    char filename[100];
    char data[100];
    printf("Enter the name of the file to read\n");
    scanf("%s", filename);
    fptr= fopen(filename, "r");
    if(fptr==NULL)
    {
        printf("error");
    }
    printf(" the content of the file");
    while(fscanf(fptr, "%s", data)!=EOF)
    {
         printf("%s", data);
    }
    fclose(fptr);
}