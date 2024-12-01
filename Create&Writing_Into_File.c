#include<stdio.h>
#include<string.h>
void main(){
    FILE*fptr;
    char filename[100];
    char data[100];
    printf("Enter the name of the file to create\n");
    scanf("%s", filename);
    fptr= fopen(filename, "w");
    if(fptr==NULL)
    {
        printf("error");
    }
    printf("Enter the content of the file\n");
    getchar();
    fgets(data, sizeof(data), stdin);
    fprintf(fptr,"%s", data);
    printf("data stored successfully");
    fclose(fptr);
}