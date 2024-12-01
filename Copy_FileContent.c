#include<stdio.h>
#include<string.h>
void main()
{
    FILE *src, *des;
    char srcfilename[100], desfilename[100];
    char data[100];
    printf("enter the name of the sourcefile\n");
    scanf("%s", srcfilename);
    src= fopen(srcfilename, "r");
    if(src==NULL)
    {
        printf("error");
    }
    printf("enter the name of the destination file\n");
    scanf("%s",desfilename);
    des= fopen(desfilename,"w");
    if(des==NULL)
    {
        printf("error");
    }
    while(fscanf(src,"%s",data)!=EOF)
    {
        fprintf(des,"%s",data);
    }
    printf("copied successfully\n");
    fclose(src);
    fclose(des);
    printf("open the copied file\n");
    des=fopen(desfilename, "r");
    while(fscanf(des,"%s", data)!=EOF)
    {
        printf("%s",data);
    }
    fclose(des);
}